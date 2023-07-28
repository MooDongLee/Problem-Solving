-- 코드를 입력하세요
SELECT fh.flavor
FROM first_half fh JOIN icecream_info ii
ON fh.flavor = ii.flavor
WHERE total_order > 3000 AND ingredient_type = 'fruit_based'
ORDER BY total_order DESC