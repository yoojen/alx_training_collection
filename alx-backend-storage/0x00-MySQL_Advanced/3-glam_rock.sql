-- GET LIFESPAN BY DIFFERENTIATING FORMED AND SPLIT

SELECT
    band_name,
    IFNULL(split, 2022) - IFNULL(formed, 0) AS lifespan
from
    metal_bands
where
    style LIKE '%Glam roc%'
ORDER BY lifespan DESC;
