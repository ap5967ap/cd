class Demo:
    def __init__(self):
        pass
    def test(self):
        print(__name__) #GIVES __main__
x=Demo()
x.test()