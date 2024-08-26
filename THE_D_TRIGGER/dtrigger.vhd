LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

ENTITY dtrigger IS
END dtrigger;
 
ARCHITECTURE behavior OF dtrigger IS 
 
 
    COMPONENT THE_D_TRIGGER
    PORT(
         CP : IN  std_logic;
         D : IN  std_logic;
         Q : INOUT  std_logic;
         NQ : INOUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CP : std_logic := '1';
   signal D : std_logic := '0';

	--BiDirs
   signal Q : std_logic:='0';
   signal NQ : std_logic:='1';
   -- No clocks detected in port list. Replace clk below with 
   -- appropriate port name 
 signal clk:std_logic:='0';
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: THE_D_TRIGGER PORT MAP (
          CP => CP,
          D => D,
          Q => Q,
          NQ => NQ
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		CP<='0';wait for clk_period*10;
CP<='1';D<='1';wait for clk_period*10;
CP<='0';D<='0';wait for clk_period*10;
CP<='1';D<='0';wait for clk_period*10;
CP<='0';D<='0';wait for clk_period*10;
CP<='1';D<='0';wait for clk_period*10;
      wait;
   end process;

END;
