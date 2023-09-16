-- 2. For the above DBs and tables, try to print common values across 
--    Indian table of  plantA and Indian table of plantB.

-- we are doing this after running script of assignment 1 without drop table or the inter changes

select * from plantA.indian intersect select * from plantB.indian;