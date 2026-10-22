/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B8679937D2C83D86AD28DE0A291C328C47DFA31E96FF0739B5CFBDB7939CDAA
 * Entry: 0x00316530, Ghidra index: 12141, label: FUN_00316530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fe98;
extern uint32_t _DAT_fe801000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00316530(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  uint uStack_18;
  
  uStack_18 = 0x316541;
  iVar3 = FUN_0031c00a();
  if (-1 < iVar3) {
    uStack_18 = 0x7ff;
    puStack_1c = (undefined4 *)0x31655b;
    iVar3 = FUN_0031aab0();
    if (-1 < iVar3) {
      puStack_1c = (undefined4 *)&LAB_00316344;
      iStack_20 = in_ECX + 0x700;
      uStack_24 = 0x31657a;
      KeInitializeDpc();
      uStack_24 = 0;
      KeInitializeTimerEx(in_ECX + 0x720);
      KeInitializeDpc(in_ECX + 0x748,&LAB_003161c4);
      HalGetInterruptVector(5,&uStack_24);
      KeInitializeInterrupt(&DAT_0032fe98,&LAB_00316524);
      cVar1 = KeConnectInterrupt(&DAT_0032fe98);
      if (cVar1 == '\0') {
        iVar3 = -0x7fffbffb;
      }
      if (-1 < iVar3) {
        uStack_18 = 1;
        _DAT_fe801000 = 0xffffffff;
        puStack_1c = (undefined4 *)0x3165e7;
        FUN_0031b8ca();
        puStack_1c = (undefined4 *)(in_ECX + 0x764);
        uStack_18 = 1;
        *puStack_1c = &LAB_003161d0;
        iStack_20 = 0x3165fc;
        HalRegisterShutdownNotification();
        uStack_18 = 0;
        puStack_1c = (undefined4 *)0x316605;
        iVar3 = FUN_00316110();
      }
    }
  }
  uVar4 = 0;
  do {
    if (iVar3 < 0) {
      return iVar3;
    }
    puStack_1c = (undefined4 *)0x316615;
    uStack_18 = uVar4;
    iVar3 = DSOUND__CMcpxAPU_SetMixBinHeadroom();
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x20);
  if (-1 < iVar3) {
    uVar4 = *(uint *)(*(int *)(in_ECX + 0xc) + 8);
    if ((int)uVar4 < 0) {
      *(undefined1 *)(in_ECX + 0x68) = 0;
    }
    else {
      if (((uVar4 & 0xffff) == 2) || ((uVar4 & 0x10000) != 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)(in_ECX + 0x68) = uVar2;
    }
  }
  return iVar3;
}
