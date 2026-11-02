# Strict C++17 source declaration triage — 2026-11-02

**Completed exact-tree audit:** `9e93759516834c33b166f42822764838d7e5a715` (run `41375879245`): 13,694 checked; 3,917 passing; 9,777 failing. **Starting main:** `6a45657be5f1077e36a133ff8a2b417e06fbe174`.

Twenty-five first-error, draft-arity-matched caller/callee edges were inspected. **One** source-type-compatible declaration was validated; **24** were quarantined. Retail XBE bytes were unavailable: original CALL, register, stack, RET and behavioral contracts were **not** verified.

## Source-only C++17 repair

`0x003747D7 -> 0x00379965`: callee draft signature `void FUN_00379965(undefined4,uint)` matches the caller's `undefined4` and promoted `undefined2` arguments. The only change is an explicitly `ABI_UNVERIFIED` forward declaration. Caller preimage SHA-256 `2a9f5174a91ca8d409a7c0a94a7fed17b7d167ec2800048e1b30a6adb580f548`; original body label `D7C58CE589388D0D1426F88CA054BF549BF7D1C50ECFC6ACAC5916B43AC889E0`. Isolated Clang++17 O0/O2 syntax and object compilation passed; declaration-removal controls failed as expected. Not linked, not behavior-tested.

## Evidence-needed quarantine

| Caller -> callee | Source-level blocker |
| --- | --- |
| `0x003158C4` -> `0x0031B1CD` | scalar third argument versus `int*` |
| `0x003158D8` -> `0x0031B1CD` | guest scalar third argument versus int* |
| `0x0031A81C` -> `0x0031A72F` | pointer-to-pointer versus uint* |
| `0x0031AE9C` -> `0x003118C0` | int versus int* |
| `0x0031C11A` -> `0x0031C0FD` | void callee return consumed |
| `0x0031C960` -> `0x003158C4` | stack-array pointer versus scalar undefined4 |
| `0x003718C0` -> `0x00375A20` | guest device address versus float* |
| `0x0034C812` -> `0x0034C7E5` | undefined4* versus scalar undefined4 |
| `0x0034E23D` -> `0x0034CB5A` | scalar callback argument versus code* |
| `0x0034E276` -> `0x00352E4C` | int* versus undefined8* |
| `0x0034E296` -> `0x00352E5E` | int* versus undefined4* |
| `0x003353E9` -> `0x0033DDF6` | guest scalar sixth argument versus int* |
| `0x003354E5` -> `0x0033DDF6` | guest scalar sixth argument versus int* |
| `0x0033BCEC` -> `0x00330C3E` | int versus undefined4* |
| `0x0033D619` -> `0x0033CFF0` | void callee return consumed |
| `0x0033FC56` -> `0x0033F570` | guest scalar arguments versus pointer parameters |
| `0x0034439F` -> `0x003441EA` | scalar third argument versus uint* |
| `0x003446D9` -> `0x003437B3` | int versus int* |
| `0x003449E9` -> `0x003448DC` | scalar third argument versus uint* |
| `0x00344AEF` -> `0x00343377` | int* versus int |
| `0x003805B1` -> `0x003801D0` | guest scalar addresses versus pointer parameters |
| `0x000BB600` -> `0x000CD9C0` | int* return assigned to undefined4 |
| `0x0010AD40` -> `0x000CD9C0` | int* return assigned to undefined4 |
| `0x0017E200` -> `0x000A0C60` | void return consumed as float* |

No casts, parameters, outputs, or guest32 pointer conversions were invented. Syntax is not 1:1 behavior. Original retail functions remain preserved; verified demo-only exclusions belong to the later Reloaded packaging gate.
