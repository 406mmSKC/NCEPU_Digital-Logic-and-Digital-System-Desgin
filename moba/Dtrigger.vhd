
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity Dtrigger is
  Port ( D : in  STD_LOGIC;
           CP : in  STD_LOGIC;
           Rd : in  STD_LOGIC;
           Q : out  STD_LOGIC;
           NQ	 : out  STD_LOGIC);
end Dtrigger;

architecture Behavioral of Dtrigger is

begin
process(CP,Rd,D)
	begin
		if Rd='0' then  --看是否异步置0
			Q<='0';
			NQ<='1';
			else if CP'event and CP='1'then  --上升沿触发
				Q<=D;
				NQ<=not D;              --设置D触发器的一个状态
			end if;
		end if;
	end process;

end Behavioral;

