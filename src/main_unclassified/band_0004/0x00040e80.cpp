/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 878A643EFA6FCCBAE122011F89C4F0D366674EAC38F9FD600AF7BB82A7E35697
 * Entry: 0x00040e80, Ghidra index: 486, label: FUN_00040e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004e8f0(void);

undefined4 FUN_00040e80(void)

{
  int *in_ECX;
  
  FUN_0004e8f0();
  (**(code **)(*in_ECX + 0x5bc))();
  return 1;
}
