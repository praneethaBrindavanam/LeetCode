# Write your MySQL query statement below
select a.book_id, a.title, a.author, a.genre, a.publication_year, count(b.record_id) as current_borrowers from library_books as a join borrowing_records as b on a.book_id = b.book_id AND b.return_date IS NULL group by 
    a.book_id,
    a.title,
    a.author,
    a.genre,
    a.publication_year,
    a.total_copies 
HAVING a.total_copies = COUNT(b.record_id) 
order by current_borrowers desc, a.title;