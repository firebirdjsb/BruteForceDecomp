/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03A29460FDC9498066BD6D7667132CCD2EB4F3D4D000CE455C0708F3C70D30B1
 * Entry: 0x00208650, Ghidra index: 7316, label: FUN_00208650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee draft at 0x001FEDB0 reads a first guest DWORD, an int-key
 * pointer and a byte-addressed data buffer. This declaration matches
 * those draft storage types; the full Xbox calling ABI is UNVERIFIED. */
extern char FUN_001fedb0(undefined4 mode, int *key, byte *value);
char FUN_00208650(undefined4 param_1,int *param_2,byte *param_3)

{
  char cVar1;
  int in_ECX;
  byte bVar2;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if (*param_2 == -0x1512dc56) {
      if ((char)param_1 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)param_3;
      }
      else {
        *(undefined4 *)param_3 = *(undefined4 *)(in_ECX + 0x40);
      }
      cVar1 = '\x01';
    }
    bVar2 = *(int *)(in_ECX + 0x40) != 0;
    if ((cVar1 == '\0') && (*param_2 == -0x1cc12513)) {
      if ((char)param_1 != '\0') {
        *param_3 = bVar2;
        *(uint *)(in_ECX + 0x40) = (uint)bVar2;
        return '\x01';
      }
      bVar2 = *param_3;
      cVar1 = '\x01';
    }
    *(uint *)(in_ECX + 0x40) = (uint)bVar2;
  }
  return cVar1;
}
