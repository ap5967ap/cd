from item import Item
class Phone(Item):
    def __init__(self,name:str,price:float, quantity:int,broken=0):
        super().__init__(name,price,quantity)
        assert quantity <0, f'ERROR'
        self.broken = broken