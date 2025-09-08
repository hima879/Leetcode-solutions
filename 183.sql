-- Select the customer name and label it as "Customers"
SELECT c.name AS Customers
FROM Customers c
-- Perform a LEFT JOIN between Customers and Orders
-- This ensures all customers are included, even those without orders
LEFT JOIN Orders o
    ON c.id = o.customerId
-- Filter to only those customers who do NOT have any matching order
-- (If no order exists, o.customerId will be NULL)
WHERE o.customerId IS NULL;
