SELECT DATETIME AS 시간
FROM (SELECT * FROM ANIMAL_INS ORDER BY DATETIME DESC)
WHERE ROWNUM <= 1