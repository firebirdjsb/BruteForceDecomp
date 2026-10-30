/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 308FA73875FB75635E44847DA119D4C66F57423E92BAF344E489F29987D8B2D4
 * Entry: 0x00207f20, Ghidra index: 7312, label: FUN_00207f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee draft at 0x001FEDB0 reads a first guest DWORD, an int-key
 * pointer and a byte-addressed data buffer. This declaration matches
 * those draft storage types; the full Xbox calling ABI is UNVERIFIED. */
extern char FUN_001fedb0(undefined4 mode, int *key, byte *value);
char FUN_00207f20(undefined4 param_1,int *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int in_ECX;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(in_ECX + 0x40);
    if (*param_2 == 0x18f66101) {
      if ((char)param_1 != '\0') {
        *param_3 = uVar2;
        *(undefined1 *)(in_ECX + 0x40) = uVar2;
        return '\x01';
      }
      uVar2 = *param_3;
      cVar1 = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x40) = uVar2;
  }
  return cVar1;
}
