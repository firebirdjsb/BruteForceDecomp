/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93DB253E1AC86FACDAA3BC4E66E1F058E4A74DF35EA021D145DEF91A075BCC36
 * Entry: 0x0031c11a, Ghidra index: 12323, label: FUN_0031c11a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0031c11a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0031c0fd(0x13,0);
  if (iVar1 == 0) {
    uVar2 = 0x80004005;
  }
  return uVar2;
}
