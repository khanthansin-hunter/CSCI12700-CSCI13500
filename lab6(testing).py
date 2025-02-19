import matplotlib.pyplot as plt
import pandas as pd

reading = pd.read_csv('nycHistPop.csv',skiprows=5)  #skip first 5 rows since the data starts at row 6
print(reading)
reading.plot(x='Year')
#plt.show()
print(reading.max())                                                #maximum
print(reading.min())                                                #minimum
print(reading.mean())                                               #average
print(reading.count())                                              #count how many rows/entries in each column
print(reading.std())

print(reading['Manhattan'])
print(reading['Manhattan']*2)
print(reading['Manhattan']/reading['Total'])
reading['fraction'] = reading['Manhattan']/reading['Total']         #create new column named fraction
print(reading['fraction'])
reading.plot(x='Year',y='fraction')
plt.show()
fig=plt.gcf()
fig.savefig('manhattanfraction.png')

rain = pd.read_csv('AustraliaRain.csv')
groupedData = rain.groupby('Location')
print(groupedData['Rainfall'].mean())

print(rain.groupby('Location')['Rainfall'].mean())
albury = rain.groupby('Location').get_group('Albury')
print(albury['Rainfall'].mean())

students = pd.read_csv('student_info.csv')
groupedData = students.groupby('Grade Level')
print(groupedData['Score'].mean())
seniorStudents = groupedData.get_group('Senior')
max = seniorStudents['Score'].max()
