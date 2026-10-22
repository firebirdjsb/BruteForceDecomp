/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DB2457CA5AB11D1E8B6711BA9041D23B7CF8967AEF3D47DAF1BF08B3410BF68
 * Entry: 0x00294900, Ghidra index: 9297, label: FUN_00294900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00294900(void)

{
  int *piVar1;
  int *in_ECX;
  
  do {
    do {
      piVar1 = in_ECX;
      if (piVar1 == (int *)0x0) {
        return;
      }
      in_ECX = (int *)*piVar1;
    } while (in_ECX == (int *)0x0);
    do {
      if (in_ECX[1] != 0) break;
      in_ECX = (int *)*in_ECX;
      *piVar1 = (int)in_ECX;
    } while (in_ECX != (int *)0x0);
  } while( true );
}
