// Problem Statement
// Develop a program to calculate employee salary details.
// Requirements
// Input:
// Employee Name
// Basic Salary
// Calculate:
// HRA = 20% of Basic Salary
// DA = 10% of Basic Salary
// Gross Salary = Basic + HRA + DA
// Display salary details neatly.
// Store details of multiple employees in a list.

employees=[]
while True:
  name=input("Enter the employee's name (or 'exit' to stop) :")
  if lower(name)=='exit':
    break
  basic_salary=float(input("Enter the basic salary of the employee:"))
  hra=20*basic_salary/100
  da=10*basic_salary/100
  gross_salary=basic_salary+hra+da
  employees.append({
    'name':name,
    'Basic salary':basic_salary,
    'HRA':hra,
    'DA':da
    'Gross salary':gross_salary
  })

  for employee in employees:
    print("\n Employee details:")
    for key,value in employee:
      print(f"{key}:{value}")
