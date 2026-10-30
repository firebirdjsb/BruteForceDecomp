/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 172FB42202EB78C08B5BB4B3E06469381C356DB425B7F9E810F6A94A1A61B3C5
 * Entry: 0x00020a10, Ghidra index: 179, label: FUN_00020a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004e8f0(void);
extern uint FUN_0003f0e0(char param_1);

undefined4 FUN_00020a10(void)

{
  uint *puVar1;
  int *in_ECX;
  
  FUN_0004e8f0();
  in_ECX[0x114] = 0;
  in_ECX[0x113] = 0;
  in_ECX[0x112] = 0;
  FUN_0003f0e0(0);
  (**(code **)(*in_ECX + 0x1c))();
  if (in_ECX[0x1a0] != 0) {
    puVar1 = (uint *)(in_ECX[0x1a0] + 0x28);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  in_ECX[0x1a0] = 0;
  *(undefined1 *)((int)in_ECX + 0x85d) = 0;
  in_ECX[0x218] = 0x3f800000;
  return 1;
}
