# SyntacticAnalyzer
A simple top-down syntactic analyzer for simple arithmetic expressions created for the Compilers Class at Universidad de Guadalajara

Based on the Book of the dragon page 32 the production rules are the following:

Production					Semantic Rule

L -> E\n					L.val = E.val  
E-> DE’				  	E.val = D.val E’.val  
E’->-DE’ / 𝟄			 E’.val = - D.val E’.Val / 0  
D-> SE’					  D.val = S.val E’.val  
D’->+SE’ / 𝟄			 D’.val = + S.val E’.Val / 0  
S -> TS’					S.val = T.val S’.val  
S’-> TS’ / 𝟄	  	 S’.val = / T.val S’.val / 1  
T -> FT’					T.val = F.val T’.val  
T’ ->xFT’/  𝟄		 T’.val = x F.val T’.val / 1  
F -> (F)					F.val = F.val  
F -> digit				F.val = digit.lexval  
