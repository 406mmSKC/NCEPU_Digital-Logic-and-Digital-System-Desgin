
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY testlab IS
END testlab;
 
ARCHITECTURE behavior OF testlab IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT lab4
    PORT(
         clk : IN  std_logic;
         jud : IN  std_logic;
         people : IN  std_logic_vector(5 downto 0);
         light : OUT  std_logic_vector(5 downto 0);
         seg : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal jud : std_logic := '0';
   signal people : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal light : std_logic_vector(5 downto 0);
   signal seg : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lab4 PORT MAP (
          clk => clk,
          jud => jud,
          people => people,
          light => light,
          seg => seg
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for 10ns;
		clk <= '1';
		wait for 10ns;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		jud<='0';
      wait for 100 ns;	
jud<='1';
people<="000001";
wait for 100 ns;	
jud<='0';
wait for 100 ns;	
jud<='1';
people<="100000";
wait for 100 ns;	
people<="100010";
      -- insert stimulus here 

      wait;
   end process;

END;
