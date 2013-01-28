# DoR Policy Feature

This Feature holds all of the functionality associated with the Research Policy Handbook (RPH).
A summary of the components:

* Three content types to display Policy.
* Four views to display the different levels of items
	
* Three Blocks
	> 	GoTo Policies Form: 
		A Jump style navigation by Chapter (section) and Document
		Should be enable on Chapter and Document content types
	> 	Pager for Polices:
		A Previous and Next button
		Should be enabled on the Document and Chapter content types
	>	Policy Jumpto
		A secondary Jump menu displayed on sidebar
		Should be enabled on Document content types

Basic structure:
Policy View, lists all books: /policy
> Policy Book Node, lists all of the Policy Chapters (referred to as sections)
 > Policy Chapter Node, lists all of the Policy Documents
  > Policy Documents content

The feature also contains the configuration for path-auto to create a path structure as such:
/policies/book-title/chapter-title/document-title

You should make sure that the menu system reflects this structure as content is entered, starting with /policies as the parent
if /policies does not already exist create it. 
