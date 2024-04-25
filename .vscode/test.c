//#include "cachelab.h"
#include <unistd.h>
#include <getopt.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>


typedef struct cache_line
{
    int valid;     //有效位
    int tag;       //标记位
    int time_tamp; //时间戳
} Cache_line;

typedef struct cache_
{
    int S;
    int E;
    int B;
    Cache_line **line;
} Cache;



int hit_count = 0,miss_count = 0,eviction_count = 0;
int is_print = 0;
Cache *cache = NULL ;
char t[1000];//input trace: -t <tracefile>: Name of the valgrind trace to replay




void Init_Cache(int s,int E,int b){
	int S = 1 << s;
	int B = 1<< b;
	
	cache = (Cache *)malloc(sizeof(Cache)) ;
	cache->S = S;
	cache->B = B;
	cache->E = E;
	
	cache->line = (Cache_line **) malloc(sizeof(Cache_line *) * S);
	for(int i = 0;i < S ;i++){
		cache->line[i] = (Cache_line *)malloc(sizeof(Cache_line) * E);
		for(int j = 0;i < E;j++){
			cache->line[i][j].valid = 0;
			cache->line[i][j].tag = -1;
			cache->line[i][j].time_tamp = 0;
		}
	
	}
	
}

void do_update(int update_index, int op_s, int op_tag){
	cache->line[op_s][update_index].tag = op_tag;
	cache->line[op_s][update_index].valid = 1;

    for(int i = 0;i < cache->E ;i ++){
        if(cache->line[op_s][i].valid = 1){
            cache->line[op_s][i].time_tamp ++;
        }
    }
	cache->line[op_s][update_index].time_tamp = 0;


}

int get_index(int op_s,int op_tag){
    for(int i = 0;i < cache->E ;i ++){
        Cache_line cur = cache->line[op_s][i] ;
        if(cur.valid == 1 && cur.tag == op_tag) return i;
    }
    return -1;

}

int is_full(int op_s){
    for(int i = 0; i < cache->E ;i ++){
        if(cache->line[op_s][i].valid == 1) return i;
    }
    return -1;
}

int do_Select(int op_s ,int op_tag){
    int max_time = 0;
    int select_index = -1;

    for(int i = 0;i < cache->E ;i ++){
        Cache_line cur = cache->line[op_s][i] ;
        if(cur.time_tamp > max_time){
            max_time = cur.time_tamp ;
            select_index = i;
        }
    }

    return select_index;

}

void update_info(int op_tag,int op_s){
    int hit_index = get_index(op_s ,op_tag) ;
    if(hit_index == -1){
        miss_count ++ ;
        if(is_print) printf("miss ");
        int i = is_full(op_s) ;
        if (i == -1)
        {
            eviction_count ++ ;
            if(is_print) printf("eviction ");
            i = do_Select(op_s ,op_tag);
        }
        do_update(i ,op_s,op_tag) ;
    }else {
        hit_count ++;
        if(is_print) printf("hit");
        do_update(hit_index ,op_s ,op_tag);


    }



}






void get_trace(int s, int E, int b)
{
    FILE *pFile;
    pFile = fopen(t, "r");
    if (pFile == NULL)
    {
        exit(-1);
    }
    char identifier;
    unsigned address;
    int size;
    // Reading lines like " M 20,1" or "L 19,3"
    while (fscanf(pFile, " %c %x,%d", &identifier, &address, &size) > 0) // I读不进来,忽略---size没啥用
    {
        //想办法先得到标记位和组序号
        int op_tag = address >> (s + b);
        int op_s = (address >> b) & ((unsigned)(-1) >> (8 * sizeof(unsigned) - s));
        switch (identifier)
        {
        case 'M': //一次存储一次加载
            update_info(op_tag, op_s);
            update_info(op_tag, op_s);
            break;
        case 'L':
            update_info(op_tag, op_s);
            break;
        case 'S':
            update_info(op_tag, op_s);
            break;
        }
    }
    fclose(pFile);
}

//
void free_Cache()
{
    int S = cache->S;
    for (int i = 0; i < S; i++)
    {
        free(cache->line[i]);
    }
    free(cache->line);
    free(cache);
}



// 
void print_help()
{
    printf("** A Cache Simulator by Deconx\n");
    printf("Usage: ./csim-ref [-hv] -s <num> -E <num> -b <num> -t <file>\n");
    printf("Options:\n");
    printf("-h         Print this help message.\n");
    printf("-v         Optional verbose flag.\n");
    printf("-s <num>   Number of set index bits.\n");
    printf("-E <num>   Number of lines per set.\n");
    printf("-b <num>   Number of block offset bits.\n");
    printf("-t <file>  Trace file.\n\n\n");
    printf("Examples:\n");
    printf("linux>  ./csim -s 4 -E 1 -b 4 -t traces/yi.trace\n");
    printf("linux>  ./csim -v -s 8 -E 2 -b 4 -t traces/yi.trace\n");
}



int main(int argc, char *argv[])
{
    char opt;
    int s, E, b;
    /*
     * s:S=2^s是组的个数
     * E:每组中有多少行
     * b:B=2^b每个缓冲块的字节数
     */
    while (-1 != (opt = getopt(argc, argv, "hvs:E:b:t:")))
    {
        switch (opt)
        {
        case 'h':
            print_help();
            exit(0);
        case 'v':
            is_print = 1;
            break;
        case 's':
            s = atoi(optarg);
            break;
        case 'E':
            E = atoi(optarg);
            break;
        case 'b':
            b = atoi(optarg);
            break;
        case 't':
            strcpy(t, optarg);
            break;
        default:
            print_help();
            exit(-1);
        }
    }
    Init_Cache(s, E, b); //初始化一个cache
    get_trace(s, E, b);
    free_Cache();
    // printSummary(hit_count, miss_count, eviction_count);
    //printSummary(hit_count, miss_count, eviction_count);
    return 0;
}
