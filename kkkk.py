from PyQt5.QtWidgets import QApplication, QMainWindow, QPushButton, QLabel, QLineEdit, QVBoxLayout, QWidget

class SimplePyQt5Demo(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("PyQt5 Demo")
        self.setGeometry(100, 100, 300, 200)
        
        # Creating widgets
        self.label = QLabel("Enter your name:")
        self.textbox = QLineEdit()
        self.button = QPushButton("Click Me!")
        self.result_label = QLabel("")
        
        # Setting up the layout
        layout = QVBoxLayout()
        layout.addWidget(self.label)
        layout.addWidget(self.textbox)
        layout.addWidget(self.button)
        layout.addWidget(self.result_label)
        
        # Set the central widget of the Window.
        central_widget = QWidget()
        central_widget.setLayout(layout)
        self.setCentralWidget(central_widget)
        
        # Connecting the button click to a method
        self.button.clicked.connect(self.on_button_click)

    def on_button_click(self):
        name = self.textbox.text()
        self.result_label.setText(f"Hello, {name}!")

if __name__ == '__main__':
    app = QApplication([])
    demo = SimplePyQt5Demo()
    demo.show()
    app.exec_()
