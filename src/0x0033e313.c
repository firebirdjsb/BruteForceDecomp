/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F495268827973488E3E0D95FDFB1DF3E76A5533DEA741CB09F3F621A0AFED5E
 * Entry: 0x0033e313, Ghidra index: 12606, label: FUN_0033e313
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00001471;
extern uint32_t DAT_004b0aa4;
extern uint32_t DAT_004b0bd0;
extern uint32_t DAT_004b0bd2;
undefined4
FUN_0033e313(int param_1,char *param_2,undefined4 param_3,int param_4,int *param_5,void *param_6,
            size_t param_7,undefined4 param_8,undefined4 param_9,uint param_10)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *__dest;
  int iVar7;
  
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0x35 - (int)(param_2 + 1);
  if ((param_10 & 0x10000000) == 0) {
    iVar4 = 0x52 - (int)(param_2 + 1);
  }
  pcVar3 = pcVar3 + iVar4;
  if (param_6 != (void *)0x0) {
    pcVar3 = pcVar3 + param_7;
  }
  pcVar2 = (char *)*param_5;
  if (pcVar2 < pcVar3 + 0x27) {
    *param_5 = (int)(pcVar3 + 0x27);
    return 0x8007007a;
  }
  pcVar6 = "POST %s HTTP/1.1\r\nUser-Agent: %x/%d.%02d.%04u\r\n";
  if ((param_10 & 0x8000000) == 0) {
    pcVar6 = "POST %s HTTP/1.0\r\nUser-Agent: %x/%d.%02d.%04u\r\n";
  }
  iVar4 = FUN_0033df31(param_4,pcVar2,pcVar6,param_2,param_1,
                       *(undefined2 *)(&DAT_004b0bd2 + param_1 * 4),
                       *(undefined2 *)(&DAT_004b0bd0 + param_1 * 4),&DAT_00001471);
  if (iVar4 < 0) {
    *param_5 = (int)(pcVar3 + 0x8b);
    return 0x8007007a;
  }
  iVar7 = (int)pcVar2 - iVar4;
  iVar4 = iVar4 + param_4;
  if ((param_10 & 0x10000000) == 0) {
    iVar5 = FUN_0033df31(iVar4,iVar7,"Content-type: xon/%x\r\n",param_1);
    if (iVar5 < 0) goto LAB_0033e42c;
    iVar7 = iVar7 - iVar5;
    iVar4 = iVar4 + iVar5;
  }
  iVar5 = FUN_0033df31(iVar4,iVar7,"Content-Length: %I64u\r\n",param_8,param_9);
  if (-1 < iVar5) {
    __dest = (void *)(iVar4 + iVar5);
    if (param_6 != (void *)0x0) {
      _memmove(__dest,param_6,param_7);
      __dest = (void *)((int)__dest + param_7);
    }
    iVar4 = FUN_0033df31(__dest,iVar7 - iVar5,&DAT_004b0aa4);
    if (-1 < iVar4) {
      *param_5 = (iVar4 - param_4) + (int)__dest;
      return 0;
    }
  }
LAB_0033e42c:
  *param_5 = (int)(pcVar3 + 0x8b);
  return 0x8007007a;
}
