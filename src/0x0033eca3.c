/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1356B7FFD01C8B1AA42B370C5A08ECBB84ED11890EACC07FF7A153AEE774CF9B
 * Entry: 0x0033eca3, Ghidra index: 12627, label: FUN_0033eca3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033eca3(char *param_1,uint param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  uVar4 = param_2;
  if (param_2 == 0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar3 - (int)(param_1 + 1);
  }
  if (uVar4 < 0x11) {
    param_2 = 0;
    if (uVar4 != 0) {
      pbVar6 = (byte *)(param_1 + (uVar4 - 1));
      do {
        bVar2 = *pbVar6;
        if ((char)bVar2 < '\0') goto LAB_0033ed5c;
        if (bVar2 < 0x30) {
LAB_0033ecfe:
          if ((char)bVar2 < '\0') goto LAB_0033ed5c;
          if (0x60 < bVar2) {
            if ((char)bVar2 < '\0') goto LAB_0033ed5c;
            if (bVar2 < 0x67) goto LAB_0033ed2e;
          }
          if (((((char)bVar2 < '\0') || (bVar2 < 0x41)) || ((char)bVar2 < '\0')) || (0x46 < bVar2))
          goto LAB_0033ed5c;
        }
        else {
          if ((char)bVar2 < '\0') goto LAB_0033ed5c;
          if (0x39 < bVar2) goto LAB_0033ecfe;
        }
LAB_0033ed2e:
        uVar7 = __allshl();
        local_c = local_c | (uint)uVar7;
        local_8 = local_8 | (uint)((ulonglong)uVar7 >> 0x20);
        param_2 = param_2 + 1;
        pbVar6 = pbVar6 + -1;
      } while (param_2 < uVar4);
    }
    *param_3 = local_c;
    param_3[1] = local_8;
    uVar5 = 0;
  }
  else {
LAB_0033ed5c:
    uVar5 = 0x8007000d;
  }
  return uVar5;
}
