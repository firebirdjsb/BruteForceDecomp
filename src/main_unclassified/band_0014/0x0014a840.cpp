/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7BA6065000306A299BEF9C187B9BE992DF25CF1B7C07850A52D1E5DA94649F9
 * Entry: 0x0014a840, Ghidra index: 4296, label: FUN_0014a840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0014a840(void)

{
  int iVar1;
  int in_ECX;
  int unaff_ESI;
  
  if (in_ECX == *(char *)(unaff_ESI + 0x1b8)) {
    return false;
  }
  iVar1 = FUN_0014a780(*(char *)(unaff_ESI + 0x1b8) <= in_ECX);
  return *(int *)(*(int *)(unaff_ESI + 0xc) + 0x19c + iVar1 * 4) != 0;
}
