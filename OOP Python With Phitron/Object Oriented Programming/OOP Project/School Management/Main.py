from School import School,ClassRoom,Subject
from Persons import Student,Teacher

def main():
    school = School('Adam','UTTARA')
    eight = ClassRoom('eight')
    school.add_classroom(eight)
    nine = ClassRoom('nine')
    school.add_classroom(nine)
    ten = ClassRoom('ten')
    school.add_classroom(ten)

    # add students
    abul = Student('Abir Khan',eight)
    school.student_admission(abul)
    babul = Student('Babul Khan',eight)
    school.student_admission(babul)
    culbul = Student('Culbul Khan',eight)
    school.student_admission(culbul)
    
    #subjects
    physics_teacher = Teacher('Shahjahan Topon')
    physics = Subject('Physics',physics_teacher)
    eight.add_subject(physics)

    chemistry_teacher = Teacher('Haradon Nag')
    chemistry = Subject('chemistry',chemistry_teacher)
    eight.add_subject(chemistry)

    biology_teacher = Teacher('Gazi Ajmal')
    biology = Subject('biology',biology_teacher)
    eight.add_subject(biology)

    eight.take_semester_final()

    print(school)

if __name__ == '__main__':
    main()