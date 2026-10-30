/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 899CB944AE39F454159EAB297540490CD407DC2B056690E38B9BA5105267F48C
 * Entry: 0x002071a0, Ghidra index: 7307, label: FUN_002071a0
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
char FUN_002071a0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  char cVar2;
  
  cVar1 = FUN_001fedb0(param_1,param_2,reinterpret_cast<byte *>(param_3));
  if (cVar1 == '\0') {
    cVar2 = (char)param_1;
    if (*param_2 == 0x147569a9) {
      if (cVar2 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x40);
      }
      cVar1 = '\x01';
    }
    if (cVar1 == '\0') {
      if (*param_2 == -0x1deba594) {
        if (cVar2 == '\0') {
          *(undefined4 *)(in_ECX + 0x44) = *param_3;
        }
        else {
          *param_3 = *(undefined4 *)(in_ECX + 0x44);
        }
        cVar1 = '\x01';
      }
      if ((cVar1 == '\0') && (*param_2 == 0x12b33046)) {
        if (cVar2 != '\0') {
          *(undefined1 *)param_3 = *(undefined1 *)(in_ECX + 0x48);
          return '\x01';
        }
        *(undefined1 *)(in_ECX + 0x48) = *(undefined1 *)param_3;
        cVar1 = '\x01';
      }
    }
  }
  return cVar1;
}
