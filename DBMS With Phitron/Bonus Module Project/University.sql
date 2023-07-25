create table Student(
	roll INT PRIMARY KEY,
    first_name VARCHAR(20),
    last_name VARCHAR(20),
    age INT
);

create table Teacher(
	teacher_id INT PRIMARY KEY,
    first_name VARCHAR(20),
    last_name VARCHAR(20),
    age INT,
    degree VARCHAR(20)
);

create table Course(
	course_id INT PRIMARY KEY,
    course_name VARCHAR(30)
);

create table Enrollment(
	roll INT,
    course_id INT,
    joining_date DATE,
    constraint foreign key (roll) references Student(roll),
    constraint foreign key (course_id) references Course(course_id)
);

create table Course_taking(
	payment_amount INT,
    which_course INT,
    who_taking INT,
    constraint foreign key (who_taking) references Teacher(teacher_id),
    constraint foreign key (which_course) references Course(course_id)
);
