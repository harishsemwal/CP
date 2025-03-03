select
    Students.student_id 
    ,Students.student_name 
    ,Subjects.subject_name 
    ,count(Examinations.subject_name) attended_exams 
from
    Subjects
    cross join Students
    left join Examinations on Students.student_id  = Examinations.student_id 
                            and Subjects.subject_name = Examinations.subject_name 
group by
    Students.student_id 
    ,Students.student_name 
    ,Subjects.subject_name
order by
    student_id
    ,subject_name