/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D873E6BF8C7C1A52EF17086B18390412EAD0CA4937BD75DA4DA1654D4D7AB91
 * Entry: 0x00264900, Ghidra index: 8707, label: FUN_00264900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00264900(void)

{
  undefined4 in_ECX;
  int unaff_ESI;
  undefined4 uStack_4;
  
  uStack_4 = in_ECX;
  do {
    if (*(char *)(unaff_ESI + 5) == '\0') {
      (**(code **)(**(int **)(unaff_ESI + 8) + 0x34))(*(int **)(unaff_ESI + 8),(int)&uStack_4 + 3);
      if (uStack_4._3_1_ == '\0') {
        return;
      }
    }
    XAPILIB__SleepEx(0,1);
  } while( true );
}
