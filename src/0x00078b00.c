/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67EC883AE91E2B9813B18B334A36ADDB2A0870F862D48803743B0173ACD85431
 * Entry: 0x00078b00, Ghidra index: 1430, label: FUN_00078b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00078b00(int param_1,char *param_2,uint param_3)

{
  uint in_EAX;
  char *pcVar1;
  uint uVar2;
  char *__n;
  char *__s;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined4 *local_4;
  int iVar3;
  
  if ((param_3 != 0) || (*(uint *)(param_1 + 0x14) < in_EAX)) {
    if ((in_EAX < *(uint *)(param_1 + 0x14)) &&
       (uVar2 = *(uint *)(param_1 + 0x14) - in_EAX, param_3 <= uVar2)) {
      __n = (char *)(uVar2 + (1 - param_3));
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        iVar3 = param_1 + 4;
      }
      else {
        iVar3 = *(int *)(param_1 + 4);
      }
      local_4 = (undefined4 *)(param_1 + 4);
      __s = (char *)(iVar3 + in_EAX);
      pcVar1 = _memchr(__s,(int)*param_2,(size_t)__n);
      if (pcVar1 != (char *)0x0) {
        do {
          bVar6 = true;
          uVar2 = param_3;
          pcVar4 = pcVar1;
          pcVar5 = param_2;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            bVar6 = *pcVar4 == *pcVar5;
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
          } while (bVar6);
          if (bVar6) {
            if (0xf < *(uint *)(param_1 + 0x18)) {
              local_4 = (undefined4 *)*local_4;
            }
            return (int)pcVar1 - (int)local_4;
          }
          __n = __s + (int)(__n + (-1 - (int)pcVar1));
          __s = pcVar1 + 1;
          pcVar1 = _memchr(__s,(int)*param_2,(size_t)__n);
          if (pcVar1 == (char *)0x0) {
            return 0xffffffff;
          }
        } while( true );
      }
    }
    in_EAX = 0xffffffff;
  }
  return in_EAX;
}
