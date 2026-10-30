/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12B787A50FA8DA56A317DB34C624990C9EB6325BD82FBC3F6C0E51754C09D4F9
 * Entry: 0x000816f0, Ghidra index: 1526, label: FUN_000816f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_00081430(void);
extern uint FUN_002383b0(void);
extern undefined4 FUN_00081550(void);
extern int FUN_000782c0(int param_1);
extern void FUN_00077eb0(int param_1,float param_2);
extern uint FUN_0005b920(void);
extern void FUN_000815b0(undefined4 *param_1,int *param_2,undefined4 *param_3);
extern ulonglong FUN_002ebf10(void);

extern uint32_t DAT_00401f68;
extern uint32_t DAT_00401f6c;
extern uint32_t DAT_00401f74;
extern uint32_t DAT_00401f7c;
extern uint32_t DAT_00401f84;
extern uint32_t DAT_00401f88;
extern uint32_t DAT_00401f8c;
extern uint32_t DAT_00401f90;
extern uint32_t DAT_00401f94;
extern char s_character__d_0040dbe8[];
bool FUN_000816f0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EDX;
  undefined4 *puVar6;
  bool local_4a;
  uint local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [8];
  
  iVar3 = FUN_00081430(in_EAX);
  if (iVar3 == 0) {
    return true;
  }
  bVar1 = ~*(byte *)(iVar3 + 0x70) & 1;
  local_28 = 0;
  local_2c = DAT_00401f6c;
  local_24 = 0;
  puVar6 = local_20;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_30 = DAT_00401f68;
  FUN_002eaa19(local_20,0x20,s_character__d_0040dbe8,in_EDX + 1);
  local_28 = FUN_002383b0();
  cVar2 = FUN_00081550(param_1);
  local_24 = DAT_00401f74;
  iVar5 = FUN_000782c0(4);
  if (iVar5 != 0) {
    local_3c = (uint)bVar1;
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar5 + 8);
    FUN_00077eb0(iVar5,(float)local_3c);
  }
  local_4a = iVar5 != 0 && cVar2 != '\0';
  if (*(int *)(iVar3 + 0x5a0) == 0) {
    FUN_0005b920();
  }
  FUN_00081550(param_1);
  FUN_00081550(param_1);
  local_3c = 0;
  FUN_000815b0(&local_38,&local_3c,&local_34);
  cVar2 = FUN_00081550(param_1);
  if (cVar2 == '\0') {
    local_4a = false;
  }
  local_24 = DAT_00401f7c;
  iVar5 = FUN_000782c0(4);
  if (iVar5 == 0) {
    local_4a = false;
  }
  else {
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar5 + 8);
    FUN_00077eb0(iVar5,(float)local_38);
  }
  cVar2 = FUN_00081550(param_1);
  if (cVar2 == '\0') {
    local_4a = false;
  }
  local_24 = DAT_00401f84;
  iVar5 = FUN_000782c0(4);
  if (iVar5 == 0) {
    local_4a = false;
  }
  else {
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar5 + 8);
    FUN_00077eb0(iVar5,(float)local_34);
  }
  param_1 = *(int *)(*(int *)(iVar3 + 0x2e8) + 0x1cc);
  if ((param_1 == 0) || (bVar1 == 0)) {
    param_1 = 1;
  }
  local_24 = DAT_00401f88;
  iVar5 = FUN_000782c0(4);
  if (iVar5 == 0) {
    local_4a = false;
  }
  else {
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar5 + 8);
    FUN_00077eb0(iVar5,(float)param_1);
  }
  if (bVar1 == 1) {
    (**(code **)(*(int *)(iVar3 + 0x1b4) + 0x58))();
  }
  local_24 = DAT_00401f8c;
  iVar5 = FUN_000782c0(4);
  if (iVar5 == 0) {
    local_4a = false;
  }
  else {
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar5 + 8);
    iVar4 = FUN_002ebf10();
    FUN_00077eb0(iVar5,(float)iVar4);
  }
  iVar3 = *(int *)(iVar3 + 0x2e8);
  if (bVar1 == 1) {
    param_1 = *(int *)(iVar3 + 0x1c0);
  }
  else {
    param_1 = 0;
  }
  local_24 = DAT_00401f90;
  iVar5 = FUN_000782c0(4);
  if (iVar5 == 0) {
    local_4a = false;
  }
  else {
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar5 + 8);
    FUN_00077eb0(iVar5,(float)param_1);
  }
  if (bVar1 == 1) {
    param_1 = *(int *)(iVar3 + 0x1c4);
  }
  else {
    param_1 = 0;
  }
  local_24 = DAT_00401f94;
  iVar3 = FUN_000782c0(4);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 8);
    FUN_00077eb0(iVar3,(float)param_1);
    return local_4a;
  }
  return false;
}
