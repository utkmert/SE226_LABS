studentName = input("Enter student name: ")
labGrade = int(input("Enter your lab grade: "))
midtermGrade = int(input("Enter your midterm grade: "))
finalGrade = int(input("Enter your final grade: "))
finalScore = labGrade * 0.25 + midtermGrade * 0.35 + finalGrade * 0.4

print(studentName+"'s final score is " ,finalScore)