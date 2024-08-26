
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity moba is
    Port ( CP : in  STD_LOGIC;
           Rd : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR (2 downto 0);
           NQ : out  STD_LOGIC_VECTOR (2 downto 0));
end moba;

architecture Behavioral of moba is
	component Dtrigger is
	Port(D,CP,Rd:in STD_LOGIC;
		  Q,NQ:out STD_LOGIC);
	end component;
	
	component two_and_door is
	Port(A,B:in STD_LOGIC;
		  AB:out STD_LOGIC);
	end component;
	
	component three_and_door is
	Port(A,B,C:in STD_LOGIC;
		  ABC:out STD_LOGIC);
	end component;
	
	component two_or_door is
	Port(A,B:in STD_LOGIC;
		  AADDB:out STD_LOGIC);
	end component;
	
	component three_or_door is
	Port(A,B,C:in STD_LOGIC;
		  AADDBADDC:out STD_LOGIC);
	end component;
	
	signal sq,nsq:STD_LOGIC_VECTOR (2 downto 0);
	signal D2,D1,D0:STD_LOGIC;
	signal D11,D12,D21,D22,D23:STD_LOGIC;
	
begin
	D0<=nsq(0);
	U1:two_and_door PORT MAP(A=>sq(1),B=>nsq(0),AB=>D11);
	U2:two_and_door PORT MAP(A=>nsq(1),B=>sq(0),AB=>D12);
	U3:two_or_door PORT MAP(A=>D11,B=>D12,AADDB=>D1);
	U4:two_and_door PORT MAP(A=>sq(2),B=>nsq(0),AB=>D21);
	U5:two_and_door PORT MAP(A=>sq(2),B=>nsq(1),AB=>D22);
	U6:three_and_door PORT MAP(A=>nsq(2),B=>sq(1),C=>sq(0),ABC=>D23);
	U7:three_or_door PORT MAP(A=>D21,B=>D22,C=>D23,AADDBADDC=>D2);
	U22:Dtrigger PORT MAP(D=>D2,Rd=>Rd,CP=>CP,Q=>sq(2),NQ=>nsq(2));
	U11:Dtrigger PORT MAP(D=>D1,Rd=>Rd,CP=>CP,Q=>sq(1),NQ=>nsq(1));
	U00:Dtrigger PORT MAP(D=>D0,Rd=>Rd,CP=>CP,Q=>sq(0),NQ=>nsq(0));
	Q<=sq;NQ<=nsq;
end Behavioral;

