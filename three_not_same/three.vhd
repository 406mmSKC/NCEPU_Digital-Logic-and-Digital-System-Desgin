
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY three IS
END three;
 
ARCHITECTURE behavior OF three IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT three_not_same
    PORT(
         A : IN  std_logic;
         B : IN  std_logic;
         C : IN  std_logic;
         F : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic := '0';
   signal B : std_logic := '0';
   signal C : std_logic := '0';

 	--Outputs
   signal F : std_logic;
   -- No clocks detected in port list. Replace clk below with 
   -- appropriate port name 
 signal clk:std_logic:='0';
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: three_not_same PORT MAP (
          A => A,
          B => B,
          C => C,
          F => F
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
A<='0';B<='0';C<='0';WAIT FOR clk_period*10;
A<='0';B<='0';C<='1';WAIT FOR clk_period*10;
A<='0';B<='1';C<='0';WAIT FOR clk_period*10;
A<='0';B<='1';C<='1';WAIT FOR clk_period*10;
A<='1';B<='0';C<='0';WAIT FOR clk_period*10;
A<='1';B<='0';C<='1';WAIT FOR clk_period*10;
A<='1';B<='1';C<='0';WAIT FOR clk_period*10;
A<='1';B<='1';C<='1';WAIT FOR clk_period*10;
      wait;
   end process;

END;
