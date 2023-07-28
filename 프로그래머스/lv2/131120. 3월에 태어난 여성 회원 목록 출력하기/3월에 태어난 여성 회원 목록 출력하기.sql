-- 코드를 입력하세요
SELECT
    member_id,
    member_name,
    gender,
    date_format(date_of_birth, '%Y-%m-%d') AS date_of_birth
FROM member_profile
WHERE date_format(date_of_birth, '%m') = 3 AND gender = 'w' AND tlno IS NOT NULL
ORDER BY member_id ASC