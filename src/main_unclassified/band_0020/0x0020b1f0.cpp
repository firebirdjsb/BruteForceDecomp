/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6D0176AE52DCE248BB9E0DA2173A188D887C22358AB170FE2EEBB04ED37F265
 * Entry: 0x0020b1f0, Ghidra index: 7336, label: FUN_0020b1f0
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
char FUN_0020b1f0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_001fedb0(param_1,param_2,reinterpret_cast<byte *>(param_3));
  if ((cVar1 == '\0') && (*param_2 == 0x4c62ab4)) {
    if ((char)param_1 != '\0') {
      *param_3 = *(undefined4 *)(in_ECX + 0x40);
      return '\x01';
    }
    *(undefined4 *)(in_ECX + 0x40) = *param_3;
    cVar1 = '\x01';
  }
  return cVar1;
}
