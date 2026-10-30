/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EAD9B1EA3AD925B15E8E133CF594F57F6D8B4A840DD9979A5B1D92058E8AED1
 * Entry: 0x0033e13a, Ghidra index: 12605, label: FUN_0033e13a
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
FUN_0033e13a(int param_1,char *param_2,undefined4 param_3,int param_4,int *param_5,void *param_6,
            size_t param_7,int param_8,undefined4 param_9,undefined4 param_10,uint param_11)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *__dest;
  int iVar7;
  undefined1 local_44 [40];
  undefined1 local_1c [12];
  int local_10;
  uint local_c;
  uint local_8;
  
  if (param_8 != 0) {
    local_10 = 0x28;
    FUN_0033df59(local_44,&local_10,param_8);
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0x34 - (int)(param_2 + 1);
  local_8 = param_11 & 0x2000000;
  if (local_8 == 0) {
    iVar4 = 0x51 - (int)(param_2 + 1);
  }
  pcVar3 = pcVar3 + iVar4;
  local_c = param_11 & 0x1000000;
  if (local_c == 0) {
    pcVar3 = pcVar3 + 0x17;
  }
  if (param_6 != (void *)0x0) {
    pcVar3 = pcVar3 + param_7;
  }
  if (param_8 != 0) {
    iVar4 = FUN_0033df31(local_1c,0xc,"%I64u",param_9,param_10);
    pcVar3 = pcVar3 + iVar4 + local_10 + 0x20;
  }
  pcVar2 = (char *)*param_5;
  if (pcVar2 < pcVar3 + 3) {
    *param_5 = (int)(pcVar3 + 3);
    return 0x8007007a;
  }
  pcVar6 = "GET %s HTTP/1.0\r\nUser-Agent: %x/%d.%02d.%04u\r\n";
  if ((param_11 & 0x4000000) == 0) {
    pcVar6 = "GET %s HTTP/1.1\r\nUser-Agent: %x/%d.%02d.%04u\r\n";
  }
  iVar4 = FUN_0033df31(param_4,pcVar2,pcVar6,param_2,param_1,
                       *(undefined2 *)(&DAT_004b0bd2 + param_1 * 4),
                       *(undefined2 *)(&DAT_004b0bd0 + param_1 * 4),&DAT_00001471);
  if (iVar4 < 0) goto LAB_0033e225;
  iVar7 = (int)pcVar2 - iVar4;
  __dest = (void *)(param_4 + iVar4);
  if (local_8 == 0) {
    iVar4 = FUN_0033df31(__dest,iVar7,"Content-type: xon/%x\r\n",param_1);
    if (iVar4 < 0) goto LAB_0033e225;
    iVar7 = iVar7 - iVar4;
    __dest = (void *)((int)__dest + iVar4);
  }
  if (local_c == 0) {
    /* 0x33e262..0x33e275: MOVZX the four bytes at EBP+0x10..0x13,
     * pushed high byte first; the formatter receives low byte first. */
    iVar4 = FUN_0033df31(__dest,iVar7,"Host: %d.%d.%d.%d\r\n",
                         (uint8_t)param_3,(uint8_t)(param_3 >> 8),
                         (uint8_t)(param_3 >> 16),(uint8_t)(param_3 >> 24));
    if (iVar4 < 0) goto LAB_0033e225;
    iVar7 = iVar7 - iVar4;
    __dest = (void *)((int)__dest + iVar4);
  }
  if (param_8 != 0) {
    iVar4 = FUN_0033df31(__dest,iVar7,"If-Range: %s\r\n",local_44);
    if (iVar4 < 0) goto LAB_0033e225;
    iVar5 = FUN_0033df31((int)__dest + iVar4,iVar7 - iVar4,"Range: bytes=%s-\r\n",local_1c);
    if (iVar5 < 0) goto LAB_0033e225;
    iVar7 = (iVar7 - iVar4) - iVar5;
    __dest = (void *)((int)__dest + iVar4 + iVar5);
  }
  if (param_6 != (void *)0x0) {
    _memmove(__dest,param_6,param_7);
    __dest = (void *)((int)__dest + param_7);
  }
  iVar4 = FUN_0033df31(__dest,iVar7,&DAT_004b0aa4);
  if (-1 < iVar4) {
    *param_5 = (int)__dest + (iVar4 - param_4);
    return 0;
  }
LAB_0033e225:
  *param_5 = (int)(pcVar3 + 0x67);
  return 0x8007007a;
}
