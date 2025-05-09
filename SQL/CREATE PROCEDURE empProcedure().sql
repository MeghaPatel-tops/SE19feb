CREATE PROCEDURE empProcedure()
SELECT * FROM employee

call empProcedure


CREATE PROCEDURE getEmployeeById(id int)
SELECT * FROM employee WHERE empid= id

CALL getEmployeeById(2)

CREATE PROCEDURE getEmployeeByIdall(id int,id2 int)
SELECT * FROM employee WHERE empid IN (id,id2)

CALL getEmployeeByIdall(1,2)


CREATE VIEW empView
AS
SELECT * from employee;

SELECT CURRENT_USER()

CREATE TRIGGER empTrigger
AFTER UPDATE ON employee

FOR EACH ROW
INSERT into emplog(empid,taskname,tiiming)VALUES(old.empid,"update",now())


START TRANSACTION;
DELETE FROM employee where empid=5;
COMMIT;

START TRANSACTION;
DELETE FROM employee where empid=4;
ROLLBACK;

START TRANSACTION;

INSERT into employee(empname,salary,joindate)values("Megha",68787,"2021-10-09");

SAVEPOINT sp1;
UPDATE employee set joindate="2019-08-09" where empid=4;
INSERT into employee(empname,salary,joindate)values("malay",68787,"2021-10-09");


SAVEPOINT sp2;
delete from employee WHERE empid=2;


ROLLBACK to sp2;

COMMIT;

