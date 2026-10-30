/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B5E283FE54764D4485E4B545C1CCC70ABE29393F0748724306D45FF21F2593C
 * Entry: 0x0020d870, Ghidra index: 7384, label: FUN_0020d870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source draft 0x001FC7F0 uses guest EBX/EDI register objects.
 * Host declaration matches zero-explicit-arg draft; Xbox ABI_UNVERIFIED. */
extern void FUN_001fc7f0(void);
int FUN_0020d870(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    if (in_EAX != param_1) {
      FUN_001fc7f0();
    }
    in_EAX = in_EAX + 0x40;
  }
  return in_EAX;
}
