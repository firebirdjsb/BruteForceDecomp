/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1427CB5BF2090CABB93DD9961D792DAA6BE9F141043042DC6890C6FE1D4831CF
 * Entry: 0x00208f50, Ghidra index: 7319, label: FUN_00208f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* 0x001FEDB0's source draft expects byte-addressed storage. The
 * original caller supplies the SAME buffer as undefined4*: the byte
 * view below preserves the pointer, not a host/guest address cast.
 * Xbox register and object ABI are still UNVERIFIED. */
extern char FUN_001fedb0(undefined4 mode, int *key, byte *value);
char FUN_00208f50(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int in_ECX;
  
  cVar1 = FUN_001fedb0(param_1,param_2,reinterpret_cast<byte *>(param_3));
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(in_ECX + 0x40);
    if (*param_2 == -0xf297a81) {
      if ((char)param_1 == '\0') {
        uVar2 = *(undefined1 *)param_3;
      }
      else {
        *(undefined1 *)param_3 = uVar2;
      }
      cVar1 = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x40) = uVar2;
    if ((cVar1 == '\0') && (*param_2 == -0x7aed23c)) {
      if ((char)param_1 != '\0') {
        *param_3 = *(undefined4 *)(in_ECX + 0x44);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x44) = *param_3;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}
