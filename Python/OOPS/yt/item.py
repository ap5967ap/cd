import csv
class Item:
    pay_rate =0.8
    list_all=[]
    def __init__(self,name:str,price:float,quantity:0):
        assert price>=0, f"Price must be greater than zero"
        assert quantity>=0, f"Quantity must be greater than zero"
        self.name = name
        self.price = price
        self.quantity = quantity
        Item.list_all.append(self)
    def apply_discount(self):
        self.price = self.price*Item.pay_rate
    def exact_apply_discount(self):
        self.price = self.price*self.pay_rate
    @classmethod
    def get_data_from_csv(cls):
        with open('data.csv','r') as f:
            reader = csv.DictReader(f)
            items=list(reader) 
        for item in items:
            Item (
                name=item.get('name'),
                price=float(item.get('price')),
                quantity=float(item.get('quantity'))
            )
    @staticmethod
    def d(num):
        if isinstance(num,float):
            return num.is_integer()#checks if num is an integer 
        elif isinstance(num,int):
            return True
        else:
            return False
# Item.get_data_from_csv()
print(Item.d(500.00))