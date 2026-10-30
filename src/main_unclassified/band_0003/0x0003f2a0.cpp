/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BCDCB9033445AE01BF1C22CCF8740F107DBD367092CA2B1AB771AACC82ABBA3
 * Entry: 0x0003f2a0, Ghidra index: 474, label: FUN_0003f2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined1 FUN_0012eab0(char param_1);

undefined4 FUN_0003f2a0(void)

{
  int iVar1;
  
  iVar1 = FUN_000120f0();
  iVar1 = *(int *)(iVar1 + 0x1f8);
  if ((((iVar1 != 0x25) && (iVar1 != 0x26)) && (iVar1 != 0x27)) &&
     ((iVar1 != 0x29 && (iVar1 != 0x28)))) {
    FUN_0012eab0(0);
  }
  return 1;
}
