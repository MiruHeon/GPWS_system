# GPWS_system

## What is GPWS?
GPWS는 항공기에 탑재되는 지상 충돌 경보 시스템으로, 주로 기수에서 레이더를 발산하여 항공기가 지상과 얼마나 가까운지 측정하여, 측정 값을 바탕으로 너무 가까우면 경고를 보내는 메커니즘입니다. 

## Background
노트북을 샀지만, 마땅히 만들게 없었습니다. 그래서 항공전자 시스템 중에 내가 구현할 수 있는게 뭐지? 하다가 찾은게 GPWS 시스템으로, 이렇게 설계하고 제작하게 되었씁니다. 

## Overview
이런 GPWS를 구현하기 위해 사용한 마이크로컨트롤러는 아두이노 UNO, 거기에 HC-SR04 초음파 센서 그리고 수동 부저 모듈을 결선하여 구현했습니다.

<p align="center">
  <img src="https://github.com/MiruHeon/Normal-Project/blob/main/gpws.jpeg?raw=true" alt="PFD" width="500" />
</p>

## Architecture
```
초음파 센서 거리 정보 받아오기(HC-SR04) 
      ↓
위험 거리 판단(아두이노)(10cm로 잡았음)
      ↓
장애물과의 거리가 10cm 미만일 때, 수동 부저가 울림(수동부저)
```

## Wiring Diagram
<p align="center">
  <img src="https://github.com/MiruHeon/Normal-Project/blob/main/gpwss.png?raw=true" alt="배선도" width="600" />
</p>

## 개발 팀원 소개
| 류용헌 |
|:------:|
| <img src="https://github.com/MiruHeon/Normal-Project/blob/main/profile.png?raw=true" alt="류용헌" width="150"> |
| PL |

