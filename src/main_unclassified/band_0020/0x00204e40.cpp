/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36AF6C210C6C254DF42E8807604032874582DE8471C1940ED004206B9445522B
 * Entry: 0x00204e40, Ghidra index: 7285, label: FUN_00204e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee draft at 0x001FEDB0 reads a first guest DWORD, an int-key
 * pointer and a byte-addressed data buffer. This declaration matches
 * those draft storage types; the full Xbox calling ABI is UNVERIFIED. */
extern char FUN_001fedb0(undefined4 mode, int *key, byte *value);
char FUN_00204e40(undefined4 param_1,int *param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  int in_ECX;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(in_ECX + 0x44) & 1;
    if (*param_2 == 0x1b0fd5f1) {
      if ((char)param_1 == '\0') {
        bVar2 = *param_3;
      }
      else {
        *param_3 = bVar2;
      }
      cVar1 = '\x01';
    }
    *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) ^ (*(byte *)(in_ECX + 0x44) ^ bVar2) & 1;
    if ((cVar1 == '\0') && (*param_2 == 0x101c4495)) {
      if ((char)param_1 != '\0') {
        *(undefined4 *)param_3 = *(undefined4 *)(in_ECX + 0x40);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)param_3;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}
