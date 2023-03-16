select ename, sal*12+nvl(comm, 0) "Sal"
from emp
/
