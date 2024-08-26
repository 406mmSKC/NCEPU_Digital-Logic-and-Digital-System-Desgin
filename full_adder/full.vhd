--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY full IS
END full;
 
ARCHITECTURE behavior OF full IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT full_adder
    PORT(
         A : IN  std_logic;
         B : IN  std_logic;
         C1 : IN  std_logic;
         S : OUT  std_logic;
         CC : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic := '0';
   signal B : std_logic := '0';
   signal C1 : std_logic := '0';

 	--Outputs
   signal S : std_logic;
   signal CC : std_logic;
   -- No clocks detected in port list. Replace clk below with 
   -- appropriate port name 
 signal clk:std_logic:='0';
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: full_adder PORT MAP (
          A => A,
          B => B,
          C1 => C1,
          S => S,
          CC => CC
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
A<='0';B<='0';C1<='0';WAIT FOR clk_period*10;
A<='0';B<='0';C1<='1';WAIT FOR clk_period*10;
A<='0';B<='1';C1<='0';WAIT FOR clk_period*10;
A<='1';B<='0';C1<='0';WAIT FOR clk_period*10;
A<='0';B<='1';C1<='1';WAIT FOR clk_period*10;
A<='1';B<='1';C1<='0';WAIT FOR clk_period*10;
A<='1';B<='0';C1<='1';WAIT FOR clk_period*10;
A<='1';B<='1';C1<='1';WAIT FOR clk_period*10;
      wait;
   end process;

END;
