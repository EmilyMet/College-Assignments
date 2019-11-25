salesFig = 0
salesAftVat = 0
i = 0
vatDiff = 0
totalVat = 0
totalSales = 0
salesList=[]
vatList=[]

def addVat(sales):
    
    for i in sales:
        vat = 
    totalVat += vat
    return totalVat

while(salesFig != -1):
        salesFig = int(input("Please enter the sales figures: "))
        
        if salesFig == -1:
                break
            
        salesList.insert(i, salesFig)
        totalVat = addVat(salesList)
        vatList.insert(i, salesAftVat)
        totalSales += salesAftVat
        vatDiff = float((vatList[i]-salesList[i]))
        i+=1
            
print("The sales figures entered were:", salesList)
print("The sales figures including VAT were:", vatList)
print("The total VAT charged is", '%.2f'%totalVat)
print("The total sales for this period are", totalSales)
