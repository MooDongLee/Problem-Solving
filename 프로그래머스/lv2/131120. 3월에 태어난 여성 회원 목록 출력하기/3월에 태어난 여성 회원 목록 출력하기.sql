SELECT
    member_id,
    member_name,
    gender,
    to_char(date_of_birth, 'yyyy-mm-dd') AS date_of_birth
FROM member_profile
WHERE to_char(date_of_birth, 'mm') = '03' AND gender = 'W' AND tlno IS NOT NULL
ORDER BY member_id ASC