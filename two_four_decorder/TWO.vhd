
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

 
ENTITY TWO IS
END TWO;
 
ARCHITECTURE behavior OF TWO IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT two_four_decorder
    PORT(
         E : IN  std_logic;
         A : IN  std_logic;
         B : IN  std_logic;
         Y : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal E : std_logic := '0';
   signal A : std_logic := '0';
   signal B : std_logic := '0';

 	--Outputs
   signal Y : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace clk below with 
   -- appropriate port name 
    signal clk:std_logic:='0';
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: two_four_decorder PORT MAP (
          E => E,
          A => A,
          B => B,
          Y => Y
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

E<='0';B<='0';A<='0';WAIT FOR clk_period *10;
E<='0';B<='0';A<='1';WAIT FOR clk_period *10;
E<='0';B<='1';A<='0';WAIT FOR clk_period *10;
E<='0';B<='1';A<='1';WAIT FOR clk_period *10;
      wait;
   end process;

END;
