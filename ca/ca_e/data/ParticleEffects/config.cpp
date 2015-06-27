////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:51 2014 : Source 'file' date Fri Oct 31 06:07:51 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class ca_e : data\ParticleEffects\config.bin{
class CfgPatches
{
	class CA_E_ParticleEffects
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAData_ParticleEffects"};
	};
};
class CfgCloudlets
{
	class Cmeasures1
	{
		animationSpeedCoef = 1;
		colorCoef[] = {0.7,0.7,0.7,0.7};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.02;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1.3,4};
		color[] = {{ 0.9,0.9,0.9,0.6 },{ 1,1,1,0.3 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Cmeasures2: Cmeasures1
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1.5,0};
		color[] = {{ 1,1,1,-4 },{ 1,1,1,-4 },{ 1,1,1,-2 },{ 1,1,1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.03;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 0;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Cmeasures3
	{
		animationSpeedCoef = 1;
		colorCoef[] = {1,1,1,1};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = "0.003 + (time factor[0.2,0.25])*1000";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth = 16;
		particleFSIndex = 14;
		particleFSFrameCount = 5;
		particleFSLoop = 1;
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 10;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1.1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {5};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1.5};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {2,2,2};
		MoveVelocityVar[] = {3,3,3};
		rotationVelocityVar = 10;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Default
	{
		interval = "0.5 * interval + 0.5";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\cl_basic.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angle = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 1;
		rubbing = 0.05;
		size[] = {1,1};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ExplosionParticles: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 8"};
		color[] = {{ 1,1,1,-2 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0.5,0};
		MoveVelocityVar[] = {0.2,0.5,0.2};
		rotationVelocityVar = 25;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SecondaryExp: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 80;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.5;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 0;
		weight = 0.056;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {2,4};
		color[] = {{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,-0.5 }};
		animationSpeed[] = {0.75};
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {1.5,1,1.5};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 25;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ExplosionFlare: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim2.p3d";
		particleFSNtieth = 8;
		particleFSIndex = 4;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 1.25;
		rubbing = 0.1;
		size[] = {1.5,10,11,12};
		color[] = {{ 1,1,1,-0.9 },{ 1,1,1,-0.9 },{ 1,1,1,-0.9 },{ 1,1,1,0 }};
		animationSpeed[] = {2.5};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {2,2,2};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ExplosionShockWave: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\Ca\Data\ParticleEffects\FireAndSmokeAnim\ShockWave.p3d";
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Spaceobject";
		timerPeriod = 1;
		lifeTime = 0.3;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 1.25;
		rubbing = 0.1;
		size[] = {1.5,15,19,20};
		color[] = {{ 1,1,1,1 },{ 1,1,1,0 }};
		animationSpeed[] = {2.5};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {2,2,2};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class VehExplosionParticles: Default
	{
		interval = "0.03 * interval + 0.03";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 80;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3;
		moveVelocity[] = {0,15,0};
		rotationVelocity = 0;
		weight = 0.056;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {7,9};
		color[] = {{ 1,1,1,-4 },{ 1,1,1,-3 },{ 1,1,1,-2 },{ 1,1,1,-1 },{ 1,1,1,0 }};
		animationSpeed[] = {0.33};
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {3,1,3};
		MoveVelocityVar[] = {5,10,5};
		rotationVelocityVar = 25;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class FireBallBright: Default
	{
		interval = "0.05 * interval + 0.05";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 0.04;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 7","0.0125 * intensity + 9"};
		color[] = {{ 1,1,1,-4 },{ 1,1,1,-3 },{ 1,1,1,-2 },{ 1,1,1,-1 },{ 1,1,1,0 }};
		animationSpeed[] = {0.5};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {2,2,2};
		MoveVelocityVar[] = {3,5,3};
		rotationVelocityVar = 0;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class VehExpSmoke: Default
	{
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {7,20,25};
		color[] = {{ 0.3,0.3,0.3,0 },{ 0.4,0.4,0.4,0.3 },{ 0.6,0.5,0.5,0.6 },{ 0.7,0.7,0.7,0.5 },{ 0.8,0.8,0.8,0.3 },{ 1,1,1,0 }};
		animationSpeed[] = {0.5,0.3};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 3;
		positionVar[] = {0.2,0.2,0.2};
		MoveVelocityVar[] = {1.8,3,1.8};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class VehExpSmoke2: Default
	{
		interval = "0.06 * interval + 0.06";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 10","0.0125 * intensity + 13","0.0125 * intensity + 20"};
		color[] = {{ 0.8,0.8,0.8,0.7 },{ 0.8,0.8,0.8,0.5 },{ 0.8,0.8,0.8,0.25 },{ 1,1,1,0 }};
		animationSpeed[] = {5};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 3;
		positionVar[] = {1,2,1};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class WPCloud: Default
	{
		interval = 0.06;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 12;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {5,10,13,16,18,20,21,22};
		color[] = {{ 1,1,1,1 },{ 1,1,1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 4;
		positionVar[] = {4,3,4};
		MoveVelocityVar[] = {0.2,0.2,0.2};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class WPTrails: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.07;
		lifeTime = 5;
		moveVelocity[] = {0,6,0};
		rotationVelocity = 0;
		weight = 15;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {0.5};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "\ca\data\ParticleEffects\scripts\WPTrail.sqf";
		beforeDestroyScript = "\ca\data\ParticleEffects\scripts\WPTrail.sqf";
		lifeTimeVar = 1;
		positionVar[] = {2,2,2};
		MoveVelocityVar[] = {10,5,10};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class FuelStationExp: Default
	{
		interval = "0.001 * interval + 0.001";
		circleRadius = 1;
		circleVelocity[] = {10,0,10};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 80;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 1.5","0.0125 * intensity + 15"};
		color[] = {{ 1,1,1,-0.7 },{ 0.05,0.05,0.05,-0.4 },{ 0,0,0,0 }};
		animationSpeed[] = {1.5};
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {3,1,3};
		MoveVelocityVar[] = {30,2.5,30};
		rotationVelocityVar = 25;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class FuelStationSmk1: Default
	{
		interval = "0.0005 * interval + 0.0005";
		circleRadius = 10;
		circleVelocity[] = {5,0,5};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 6;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 8","0.0125 * intensity + 9","0.0125 * intensity + 10","0.0125 * intensity + 11"};
		color[] = {{ 0.1,0.1,0.1,0 },{ 0.1,0.1,0.1,0.4 },{ 0.1,0.1,0.1,0.4 },{ 0.1,0.1,0.1,0.4 },{ 0.1,0.1,0.1,0.3 },{ 0.1,0.1,0.1,0.2 },{ 0.1,0.1,0.1,0.1 },{ 0.1,0.1,0.1,0.05 },{ 0.1,0.1,0.1,0.05 },{ 0.1,0.1,0.1,0 }};
		animationSpeed[] = {1.5,0.5};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.35;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {3,2,3};
		MoveVelocityVar[] = {5,5,5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class FuelFire1: Default
	{
		interval = "0.01 * fireInterval + 0.01";
		circleRadius = 1;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 10;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 2.3;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.25 * intensity + 2","1.25 * intensity + 0.3"};
		color[] = {{ 1,1,1,0 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,0 }};
		animationSpeed[] = {0.5,1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.7;
		positionVar[] = {"2 + 1.1 * intensity",0.3,"2 + 1.1 * intensity"};
		moveVelocityVar[] = {0.1,1.2,0.1};
		rotationVelocityVar = 0;
		sizeVar = 0.2;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class FuelSmoke1: Default
	{
		interval = "0.08 * interval + 0.08";
		circleRadius = 1;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.3;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "1.12 * intensity + 5";
		moveVelocity[] = {0,3,0};
		rotationVelocity = 0;
		weight = 0.0508;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.25 * intensity + 3","1.3 * intensity + 8","1.4 * intensity + 13.5"};
		color[] = {{ 0.01,"0.01.",0.01,0.8 },{ 0.2,0.2,0.2,0.5 },{ 0.2,0.2,0.2,0.4 },{ 0.2,0.2,0.2,0.2 },{ 0.2,0.2,0.2,0 }};
		animationSpeed[] = {1.5,0.5};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 3;
		positionVar[] = {"0.25 + 1 * intensity",0.3,"0.25 + 1 * intensity"};
		MoveVelocityVar[] = {0.1,0.1,0.1};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class FuelSmoke2: Default
	{
		interval = "0.08 * interval + 0.08";
		circleRadius = 1;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "1.25 * intensity + 10";
		moveVelocity[] = {0,3,0};
		rotationVelocity = 0;
		weight = 0.0508;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.25 * intensity + 3","1.2 * intensity + 8","1.2 * intensity + 10","1.2 * intensity + 15"};
		color[] = {{ 0.01,"0.01.",0.01,0.4 },{ 0.2,0.2,0.2,0.2 },{ 0.2,0.2,0.2,0.2 },{ 0.2,0.2,0.2,0.2 },{ 0.2,0.2,0.2,0.2 },{ 0.2,0.2,0.2,0.1 },{ 0.2,0.2,0.2,0 }};
		animationSpeed[] = {1.5,0.5};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 3;
		positionVar[] = {"0.25 + 1 * intensity",0.3,"0.25 + 1 * intensity"};
		MoveVelocityVar[] = {0.1,0.1,0.1};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.1;
		randomDirectionIntensityVar = 0.05;
	};
	class SmallSmokeFast1: Default
	{
		interval = "0.03 * interval + 0.03";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 7","0.0125 * intensity + 11","0.0125 * intensity + 14","0.0125 * intensity + 16"};
		color[] = {{ 0.4,0.4,0.4,1 },{ 0.7,0.7,0.7,0.6 },{ 0.9,0.9,0.9,0.3 },{ 1,1,1,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 4;
		positionVar[] = {4,3,4};
		MoveVelocityVar[] = {3,2,3};
		rotationVelocityVar = 20;
		sizeVar = 0.6;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class CloudBigLight: Default
	{
		interval = "0.03 * interval + 0.02";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,3,0};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 7","0.0125 * intensity + 11","0.0125 * intensity + 14","0.0125 * intensity + 16"};
		color[] = {{ 0.7,0.7,0.7,1 },{ 0.8,0.8,0.8,0.6 },{ 0.9,0.9,0.9,0.3 },{ 1,1,1,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 4;
		positionVar[] = {4,3,4};
		MoveVelocityVar[] = {3,2,3};
		rotationVelocityVar = 20;
		sizeVar = 0.6;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class CloudMedLight: Default
	{
		interval = "0.02 * interval + 0.01";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 12;
		moveVelocity[] = {0,2.5,0};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 6","0.0125 * intensity + 9","0.0125 * intensity + 11","0.0125 * intensity 12"};
		color[] = {{ 0.7,0.7,0.7,1 },{ 0.8,0.8,0.8,0.6 },{ 0.8,0.8,0.8,0.3 },{ 0.9,0.9,0.9,0.15 },{ 1,1,1,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 4;
		positionVar[] = {2.5,3,2.5};
		MoveVelocityVar[] = {2,2.5,2};
		rotationVelocityVar = 20;
		sizeVar = 0.6;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class CloudBigDark: Default
	{
		interval = "0.02 * interval + 0.01";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 18;
		moveVelocity[] = {0,3,0};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 10","0.0125 * intensity + 15","0.0125 * intensity + 17","0.125 * intensity + 18"};
		color[] = {{ 0.2,0.2,0.2,1 },{ 0.4,0.4,0.4,0.6 },{ 0.6,0.6,0.6,0.3 },{ 1,1,1,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 6;
		positionVar[] = {4,3,4};
		MoveVelocityVar[] = {2,3,2};
		rotationVelocityVar = 20;
		sizeVar = 0.6;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class CloudMedDark: Default
	{
		interval = "0.02 * interval + 0.01";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 14;
		moveVelocity[] = {0,3,0};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 6","0.0125 * intensity + 9","0.0125 * intensity + 13","0.0125 * intensity 15"};
		color[] = {{ 0.2,0.2,0.2,1 },{ 0.4,0.4,0.4,0.6 },{ 0.6,0.6,0.6,0.3 },{ 0.7,0.7,0.7,0.15 },{ 1,1,1,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 5;
		positionVar[] = {2.5,3,2.5};
		MoveVelocityVar[] = {1.5,3,1.5};
		rotationVelocityVar = 20;
		sizeVar = 0.0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SmallSmokeFast2: Default
	{
		interval = "0.05 * interval + 0.05";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 2","0.125 * intensity + 12","0.0.125 * intensity + 15"};
		color[] = {{ 1,0.87,0.62,0.7 },{ 1,0.87,0.62,0.2 },{ 1,1,1,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {1,2,1};
		MoveVelocityVar[] = {0.5,3,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SmallSmokeSlow1: Default
	{
		interval = "0.05 * interval + 0.05";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,2.5,0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 2","0.125 * intensity + 10"};
		color[] = {{ 0.1,0.1,0.1,0.7 },{ 0.25,0.25,0.25,0.05 },{ 0.25,0.25,0.25,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.5,2,0.5};
		MoveVelocityVar[] = {1,2.5,1};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SmallSmokeSlow2: Default
	{
		interval = "0.05 * interval + 0.05";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,2.5,0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 2","0.0125 * intensity + 10"};
		color[] = {{ 0.1,0.1,0.1,0.7 },{ 0.25,0.25,0.25,0.05 },{ 0.25,0.25,0.25,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.5,2,0.5};
		MoveVelocityVar[] = {1,2.5,1};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SmokeBig: Default
	{
		interval = "0.025 * interval + 0.025";
		circleRadius = 2;
		circleVelocity[] = {-0.2,0,-0.2};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 2",".0.0125 * intensity + 6",".0.0125 * intensity + 11"};
		color[] = {{ 0.8,0.67,0.52,0.7 },{ 1,0.9,0.85,0.5 },{ 0.8,0.67,0.52,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.5,2,0.5};
		MoveVelocityVar[] = {1.5,3,1.5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Stones: Default
	{
		interval = "0.01 * interval + 0.01";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		animationName = "";
		particleType = "spaceobject";
		timerPeriod = 0.1;
		lifeTime = 3;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 1;
		weight = 50;
		volume = 0.01;
		rubbing = 0;
		size[] = {1};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {10,8,10};
		rotationVelocityVar = 35;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SmokeTrails: Default
	{
		interval = 0.15;
		circleRadius = 1;
		circleVelocity[] = {5,5,5};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		animationName = "";
		particleType = "BillBoard";
		timerPeriod = 0.1;
		lifeTime = 1;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 0;
		weight = 30;
		volume = 0.01;
		rubbing = 0;
		size[] = {0};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail1.sqf";
		beforeDestroyScript = "";
		lifeTimeVar = 3;
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {0.5,5,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class CircleDustBig: Default
	{
		interval = 0.005;
		circleRadius = 4;
		circleVelocity[] = {1,0,1};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.02;
		size[] = {"0.0125 * intensity + 5","0.0125 * intensity + 8"};
		color[] = {{ 0.6,0.5,0.4,0.3 },{ 0.6,0.5,0.4,0.3 },{ 0.6,0.5,0.4,0.25 },{ 0.6,0.5,0.4,0.2 },{ 0.6,0.5,0.4,0.1 },{ 0.6,0.5,0.4,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {10,1,10};
		MoveVelocityVar[] = {2,0.5,2};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class CircleDustMed: Default
	{
		interval = 0.003;
		circleRadius = 2;
		circleVelocity[] = {1,0,1};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2.5;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {4,8};
		color[] = {{ 0.5,0.4,0.3,0.2 },{ 0.5,0.4,0.3,0.3 },{ 0.5,0.4,0.3,0.2 },{ 0.5,0.4,0.3,0.15 },{ 0.5,0.4,0.3,0.05 },{ 0.6,0.5,0.4,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {10,1,10};
		MoveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class CircleDustSmall: Default
	{
		interval = 0.012;
		circleRadius = 0.5;
		circleVelocity[] = {1,0,1};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.2;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {2,3};
		color[] = {{ 0.08,0.067,0.052,0.2 },{ 0.6,0.5,0.4,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		positionVar[] = {4,4,4};
		MoveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class GrenadeExp: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.7;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 3","0.0125 * intensity + 1"};
		color[] = {{ 1,1,1,-3 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {1,0.1,1};
		MoveVelocityVar[] = {0.2,0.5,0.2};
		rotationVelocityVar = 90;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class GrenadeSmoke1: Default
	{
		interval = "0.014 * interval + 0.014";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.15;
		size[] = {"0.013 * intensity + 4","0.0125 * intensity + 6","0.013 * intensity + 8","0.013 * intensity + 12"};
		color[] = {{ 0.5,0.5,0.5,0.3 },{ 0.8,0.8,0.8,0.05 },{ 0.8,0.8,0.8,0.05 },{ 0.8,0.8,0.8,0.05 },{ 0.9,0.9,0.9,0.25 },{ 1,1,1,0 }};
		animationSpeed[] = {1.7,0.6,0.4,0.3,0.3};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 3;
		positionVar[] = {1.2,0.6,1.2};
		MoveVelocityVar[] = {3,1.5,3};
		rotationVelocityVar = 20;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.5;
		randomDirectionIntensityVar = 0.02;
	};
	class GrenadeStones: Default
	{
		interval = "0.002";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\Ca\Data\ParticleEffects\pstone\pstone.p3d";
		animationName = "";
		particleType = "spaceobject";
		timerPeriod = 0.1;
		lifeTime = 3;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 0.1;
		rubbing = 0;
		size[] = {0.4};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {1,0.5,1};
		MoveVelocityVar[] = {6,4,6};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RocketSmokeTrails: Default
	{
		interval = 0.01;
		circleRadius = 1;
		circleVelocity[] = {50,50,50};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		animationName = "";
		particleType = "BillBoard";
		timerPeriod = 0.01;
		lifeTime = 0.1;
		moveVelocity[] = {0,13,0};
		rotationVelocity = 0;
		weight = 30;
		volume = 0.01;
		rubbing = 0;
		size[] = {0};
		color[] = {{ 0.1,0.1,0.1,1 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail1.sqf";
		beforeDestroyScript = "";
		lifeTimeVar = 0.05;
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {0.5,5,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.5;
		randomDirectionIntensityVar = 0.5;
	};
	class RocketSmokeTrails2: Default
	{
		interval = 0.01;
		circleRadius = 1;
		circleVelocity[] = {50,50,50};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		animationName = "";
		particleType = "BillBoard";
		timerPeriod = 0.01;
		lifeTime = 0.1;
		moveVelocity[] = {0,13,0};
		rotationVelocity = 0;
		weight = 30;
		volume = 0.01;
		rubbing = 0;
		size[] = {0};
		color[] = {{ 0.1,0.1,0.1,1 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail2.sqf";
		beforeDestroyScript = "";
		lifeTimeVar = 0.05;
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {2,5,2};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.5;
		randomDirectionIntensityVar = 0.5;
	};
	class ExploRocks: Default
	{
		interval = 0.02;
		circleRadius = 0.1;
		circleVelocity[] = {1.5,1,1.5};
		angleVar = 1;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 9;
		particleFSLoop = 0;
		animationName = "";
		particleType = "BillBoard";
		timerPeriod = 1;
		lifeTime = 3;
		moveVelocity[] = {0,7,0};
		rotationVelocity = 0;
		weight = 50;
		volume = 0.01;
		rubbing = 0;
		size[] = {2,5};
		color[] = {{ 0.5,0.5,0.5,1 },{ 0.5,0.5,0.5,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {4,7,4};
		rotationVelocityVar = 20;
		sizeVar = 1;
		colorVar[] = {0.1,0.1,0.1,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ExploRocksDark: Default
	{
		interval = 0.02;
		circleRadius = 0.1;
		circleVelocity[] = {1.5,1,1.5};
		angleVar = 1;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 9;
		particleFSLoop = 0;
		animationName = "";
		particleType = "BillBoard";
		timerPeriod = 1;
		lifeTime = 3;
		moveVelocity[] = {0,7,0};
		rotationVelocity = 0;
		weight = 50;
		volume = 0.01;
		rubbing = 0;
		size[] = {2,4};
		color[] = {{ 0.2,0.2,0.2,1 },{ 0.2,0.2,0.2,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {2,7,2};
		rotationVelocityVar = 20;
		sizeVar = 1;
		colorVar[] = {0.1,0.1,0.1,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ShellSmokeTrail1: Default
	{
		interval = 11;
		circleRadius = 1;
		circleVelocity[] = {7,2,7};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		animationName = "";
		particleType = "BillBoard";
		timerPeriod = 0.1;
		lifeTime = 1.3;
		moveVelocity[] = {0,6,0};
		rotationVelocity = 0;
		weight = 30;
		volume = 0.01;
		rubbing = 0;
		size[] = {0};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 1;
		onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail1.sqf";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {0.5,1,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.1;
		randomDirectionIntensityVar = 1;
	};
	class ShellSmokeTrail2: Default
	{
		interval = 11;
		circleRadius = 1;
		circleVelocity[] = {7,2,7};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		animationName = "";
		particleType = "BillBoard";
		timerPeriod = 0.1;
		lifeTime = 1.3;
		moveVelocity[] = {0,6,0};
		rotationVelocity = 0;
		weight = 30;
		volume = 0.01;
		rubbing = 0;
		size[] = {0};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 1;
		onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail1.sqf";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {0.5,1,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.1;
		randomDirectionIntensityVar = 1;
	};
	class ShellSmokeTrail3: Default
	{
		interval = 11;
		circleRadius = 1;
		circleVelocity[] = {7,2,7};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 0;
		animationName = "";
		particleType = "BillBoard";
		timerPeriod = 0.1;
		lifeTime = 1.3;
		moveVelocity[] = {0,6,0};
		rotationVelocity = 1;
		weight = 30;
		volume = 0.01;
		rubbing = 0;
		size[] = {0};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 1;
		onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail1.sqf";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {0.5,1,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.1;
		randomDirectionIntensityVar = 1;
	};
	class ShellSmoke: Default
	{
		interval = "0.01 * interval + 0.01";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,3,0};
		rotationVelocity = 0;
		weight = 0.07;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 2","0.0125 * intensity + 7","0.0125 * intensity + 8"};
		color[] = {{ 0.3,0.3,0.3,0.4 },{ 0.5,0.5,0.5,0.2 },{ 1,1,1,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0.25,0.5,0.25};
		MoveVelocityVar[] = {1,7,1};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ShellStones: Default
	{
		interval = "0.015 * interval + 0.015";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 9;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 4;
		moveVelocity[] = {0,"0.0125 * intensity + 7",0};
		rotationVelocity = 1;
		weight = 12;
		volume = 0.1;
		rubbing = 0;
		size[] = {10,15};
		color[] = {{ 0.4,0.4,0.4,1 },{ 0.5,0.5,0.5,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {5,7,5};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class DirtBig: Default
	{
		interval = "0.01 * interval + 0.01";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 9;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 4;
		moveVelocity[] = {0,"0.125 * intensity + 8",0};
		rotationVelocity = 1;
		weight = 12;
		volume = 0.1;
		rubbing = 0;
		size[] = {6,10};
		color[] = {{ 0.3,0.3,0.3,1 },{ 0.3,0.3,0.3,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {5,7,5};
		rotationVelocityVar = 0;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class DirtMed: Default
	{
		interval = "0.01 * interval + 0.01";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 9;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 2;
		moveVelocity[] = {0,"0.125 * intensity + 4",0};
		rotationVelocity = 1;
		weight = 12;
		volume = 0.1;
		rubbing = 0;
		size[] = {4,6};
		color[] = {{ 0.5,0.5,0.4,1 },{ 0.5,0.5,0.5,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {5,7,5};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class DirtSmall: Default
	{
		interval = "0.05 * interval + 0.05";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 9;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 1.5;
		moveVelocity[] = {0,"0.125 * intensity + 3",0};
		rotationVelocity = 1;
		weight = 11;
		volume = 0.1;
		rubbing = 0;
		size[] = {1,2};
		color[] = {{ 1,1,0.4,1 },{ 1,1,1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {3,4,3};
		rotationVelocityVar = 1;
		sizeVar = 1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ExploAmmoSmoke: Default
	{
		interval = "0.02 * interval + 0.02";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 5;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.2;
		size[] = {"0.0125 * intensity + 1.5","0.0125 * intensity + 2.5","0.0125 * intensity + 4","0.0125 * intensity + 5"};
		color[] = {{ 0.6,0.6,0.6,1 },{ 0.7,0.7,0.7,0.5 },{ 0.8,0.8,0.8,0.25 },{ 0.9,0.9,0.9,0.1 },{ 1,1,1,0 }};
		animationSpeed[] = {1.7,0.6,0.4,0.3,0.3};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {0.5,0.3,0.5};
		MoveVelocityVar[] = {1.5,2,1.5};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ExploAmmoFlash: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 1","0.0125 * intensity + 0.5"};
		color[] = {{ 1,1,1,-1 },{ 1,1,1,0 }};
		animationSpeed[] = {2};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0.1,0};
		MoveVelocityVar[] = {0.2,0.5,0.2};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class BombExp1: Default
	{
		interval = 0.015;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 80;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,15,0};
		rotationVelocity = 0;
		weight = 0.054;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {8,11};
		color[] = {{ 1,1,1,-20 },{ 1,1,1,-10 },{ 1,1,1,-5 },{ 1,1,1,-2 },{ 1,1,1,-0.5 }};
		animationSpeed[] = {0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {4,2,4};
		MoveVelocityVar[] = {7,15,7};
		rotationVelocityVar = 25;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class BombSmk1: Default
	{
		interval = 0.007;
		circleRadius = 3.5;
		circleVelocity[] = {0.5,0,0.5};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 9;
		moveVelocity[] = {0,15,0};
		rotationVelocity = 1;
		weight = 0.11;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {12,15};
		color[] = {{ 0.5,0.5,0.5,0.8 },{ 0.5,0.5,0.5,0.6 },{ 0.6,0.6,0.6,0.3 },{ 0.8,0.8,0.8,0 }};
		animationSpeed[] = {1.5,0.5,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 3;
		positionVar[] = {0.2,0.2,0.2};
		MoveVelocityVar[] = {1,15,1};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class BombSmk2: Default
	{
		interval = 0.005;
		circleRadius = 3.5;
		circleVelocity[] = {11,0,11};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 5;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {8,11};
		color[] = {{ 0.5,0.5,0.5,0.8 },{ 0.5,0.5,0.5,0.6 },{ 0.6,0.6,0.6,0.3 },{ 0.8,0.8,0.8,0 }};
		animationSpeed[] = {1.5,0.5,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.2,0.2,0.2};
		MoveVelocityVar[] = {0.1,0.1,0.1};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class BombSmk3: Default
	{
		interval = 0.02;
		circleRadius = 5;
		circleVelocity[] = {7,0,7};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {12,15};
		color[] = {{ 0.5,0.5,0.5,0.8 },{ 0.6,0.6,0.6,0.7 },{ 0.7,0.7,0.7,0.4 },{ 1,1,1,0 }};
		animationSpeed[] = {0.5};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 5;
		positionVar[] = {3,1,3};
		MoveVelocityVar[] = {6,2,6};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class BombDust: Default
	{
		interval = 0.03;
		circleRadius = 5;
		circleVelocity[] = {10,0,10};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 1;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {13,15};
		color[] = {{ 0.08,0.067,0.052,0 },{ 0.6,0.5,0.4,0.5 },{ 0.6,0.5,0.4,0.4 },{ 0.6,0.5,0.4,0.3 },{ 0.6,0.5,0.4,0.15 },{ 0.6,0.5,0.4,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 5;
		positionVar[] = {5,1,5};
		MoveVelocityVar[] = {5,1,5};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionShardsStatic: Default
	{
		interval = 0.1;
		circleRadius = 7;
		circleVelocity[] = {0.001,0,0.001};
		particleShape = "\Ca\Data\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 0.2;
		lifeTime = 60;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {1};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 10;
		positionVar[] = {5,0,5};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionShards: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\Ca\Data\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 5;
		moveVelocity[] = {0,8,0};
		rotationVelocity = 1;
		weight = 40;
		volume = 7.9;
		rubbing = 0.05;
		size[] = {0.8};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1.5;
		positionVar[] = {5,4,5};
		MoveVelocityVar[] = {8,8,8};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ExpSparks: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {0,8,0};
		rotationVelocity = 1;
		weight = 40;
		volume = 7.9;
		rubbing = 0;
		size[] = {1,0.5,0.15,0.2,0.2,0.2,0.2,0.2,0.2,0};
		color[] = {{ 1,1,1,-50 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {2,0.5,2};
		MoveVelocityVar[] = {18,9,18};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HeliDestructionShards1: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\Ca\Data\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 10;
		moveVelocity[] = {0,8,0};
		rotationVelocity = 1;
		weight = 40;
		volume = 7.9;
		rubbing = 0.05;
		size[] = {0.8};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1.5;
		positionVar[] = {5,4,5};
		MoveVelocityVar[] = {8,8,8};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HeliDestructionShards2: Default
	{
		interval = 0.025;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\Ca\Data\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 5;
		moveVelocity[] = {0,9,0};
		rotationVelocity = 1;
		weight = 40;
		volume = 7.9;
		rubbing = 0.05;
		size[] = {0.8};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1.5;
		positionVar[] = {5,4,5};
		MoveVelocityVar[] = {8,8,8};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionSmoke: Default
	{
		interval = "0.25";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "1.25 * intensity + 15";
		moveVelocity[] = {0,5,0};
		rotationVelocity = 1;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.25 * intensity + 2","1.25 * intensity + 20"};
		color[] = {{ 0.05,"0.05.",0.05,0 },{ 0.1,0.1,0.1,0.8 },{ 0.2,0.2,0.2,0.75 },{ 0.3,0.3,0.3,0.7 },{ 0.4,0.4,0.4,0.6 },{ 0.55,0.55,0.55,0.5 },{ 0.7,0.7,0.7,0.4 },{ 0.9,0.9,0.9,0.2 },{ 1,1,1,0 }};
		animationSpeed[] = {0.8,0.3,0.25};
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 6;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {0.5,0.75,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionSmoke1_2: Default
	{
		interval = "0.2";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "1.25 * intensity + 10";
		moveVelocity[] = {0,3,0};
		rotationVelocity = 0;
		weight = 0.0508;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.25 * intensity + 1","1.25 * intensity + 4","1.25 * intensity + 12"};
		color[] = {{ 0.05,"0.05.",0.05,0.5 },{ 0.1,0.1,0.1,0.8 },{ 0.25,0.25,0.25,0.75 },{ 0.55,0.55,0.55,0.7 },{ 0.75,0.75,0.75,0.6 },{ 0.85,0.85,0.85,0.5 },{ 0.85,0.85,0.85,0.4 },{ 0.85,0.85,0.85,0.2 },{ 0.9,0.9,0.9,0 }};
		animationSpeed[] = {0.8,0.3,0.25};
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 3;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {0.5,0.75,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionFire1: Default
	{
		interval = "0.05";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 16;
		particleFSIndex = 10;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 0.1;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2.3;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 0.045;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.2 * intensity + 1.8","0.1 * intensity + 0.3"};
		color[] = {{ 1,1,1,0 },{ 1,1,1,-5 },{ 1,1,1,-3 },{ 1,1,1,-1.5 },{ 1,1,1,-1 },{ 1,1,1,0 }};
		animationSpeed[] = {0.5,1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.3,0.3,0.3};
		moveVelocityVar[] = {0.1,0.5,0.1};
		rotationVelocityVar = 10;
		sizeVar = 0.5;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionFire2: Default
	{
		interval = "0.06";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 16;
		particleFSIndex = 10;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 0.1;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2.3;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 0.045;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.2 * intensity + 1.8",0.3};
		color[] = {{ 1,1,1,0 },{ 1,1,1,-5 },{ 1,1,1,-3 },{ 1,1,1,-1.5 },{ 1,1,1,-1 },{ 1,1,1,0 }};
		animationSpeed[] = {0.5,1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.3,0.3,0.3};
		moveVelocityVar[] = {0.1,0.5,0.1};
		rotationVelocityVar = 10;
		sizeVar = 0.5;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionFlare1: Default
	{
		interval = "0.07";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 8;
		particleFSIndex = 4;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		particleShape = "\Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim2.p3d";
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 0.045;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.25 * intensity + 4"};
		color[] = {{ 1,1,1,0 },{ 1,1,1,-0.1 },{ 1,1,1,-0.1 },{ 1,1,1,-0.1 },{ 1,1,1,-0.05 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.2,0.3,0.2};
		moveVelocityVar[] = {0.1,0.6,0.1};
		rotationVelocityVar = 10;
		sizeVar = 0.5;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionFlare2: Default
	{
		interval = "0.07";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 8;
		particleFSIndex = 4;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		particleShape = "\Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim2.p3d";
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 0.045;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.25 * intensity + 4"};
		color[] = {{ 1,1,1,0 },{ 1,1,1,-0.1 },{ 1,1,1,-0.1 },{ 1,1,1,-0.1 },{ 1,1,1,-0.05 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.2,0.3,0.2};
		moveVelocityVar[] = {0.1,0.6,0.1};
		rotationVelocityVar = 10;
		sizeVar = 0.5;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionSparks: Default
	{
		interval = "1.5 * fireInterval";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\data\cl_fire";
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "6 * random + 3";
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 0.005;
		volume = 0.0042;
		rubbing = 0.05;
		size[] = {0.02};
		color[] = {{ 1,1,1,1 },{ 0,0,0,0 }};
		animationSpeed[] = {0,1};
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.3;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.8;
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {0.1,0.1,0.1};
		rotationVelocityVar = 0;
		sizeVar = 0.01;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class BarelDestructionFire: Default
	{
		interval = "0.06 * fireInterval + 0.06";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 16;
		particleFSIndex = 10;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 60;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.5;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.25 * intensity + 0.7"};
		color[] = {{ 1,1,1,0 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,0 }};
		animationSpeed[] = {0.5,1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		positionVar[] = {"0.1 + 1.25 * intensity",0.3,"0.1 + 1.25 * intensity"};
		moveVelocityVar[] = {0.1,1.2,0.1};
		rotationVelocityVar = 0;
		sizeVar = 0.2;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class BarelDestructionSmoke: Default
	{
		interval = "0.07 * interval + 0.07";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "1.25 * intensity + 1.5";
		moveVelocity[] = {0,2,0};
		rotationVelocity = 1;
		weight = 0.0508;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {"1.25 * intensity + 0.3","1.25 * intensity + 2","1.25 * intensity + 3.5"};
		color[] = {{ 0.01,0.01,0.01,0 },{ 0.1,0.1,0.1,0.7 },{ 0.1,0.1,0.1,0.5 },{ 0.1,0.1,0.1,0.3 },{ 0.1,0.1,0.1,0.1 },{ 0.1,0.1,0.1,0.02 },{ 0.1,0.1,0.1,0 }};
		animationSpeed[] = {0.8,0.3,0.25};
		randomDirectionPeriod = 0.4;
		randomDirectionIntensity = 0.09;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = "0.2 + 1.25 * intensity";
		positionVar[] = {"0.2 + 1.25 * intensity","0.2 + 1.25 * intensity","0.2 + 1.25 * intensity"};
		MoveVelocityVar[] = {0.05,0.5,0.05};
		rotationVelocityVar = 20;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class SmallFireF: Default
	{
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 10;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.5;
		moveVelocity[] = {0,0.7,0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {0.7,0};
		sizeCoef = 1;
		color[] = {{ 1,1,1,0 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,-1 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {0,0,0};
		positionVar[] = {0.05,0.2,0.05};
		moveVelocityVar[] = {0.08,0.9,0.08};
		rotationVelocityVar = 0;
		sizeVar = 0.06;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SmallFireS: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,0.6,0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {0.2,0.8,2.6};
		sizeCoef = 1;
		color[] = {{ 0.6,0.6,0.6,0 },{ 0.7,0.7,0.7,0.2 },{ 0.8,0.8,0.8,0.1 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1.5,0.5};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.4;
		randomDirectionIntensity = 0.09;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		position[] = {0,0,0};
		positionVar[] = {0.1,0.2,0.1};
		MoveVelocityVar[] = {0.05,0.5,0.05};
		rotationVelocityVar = 0;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class HouseDestructionSmoke: Default
	{
		interval = "0.02 * interval + 0.02";
		circleRadius = 10;
		circleVelocity[] = {"1.5 + 1.25 * intensity",0,"1.5 + 1.25 * intensity"};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "1.25 * intensity + 8";
		moveVelocity[] = {0,0.05,0};
		rotationVelocity = 0;
		weight = 0.051;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {"1.25 * intensity + 6","1.25 * intensity + 20"};
		color[] = {{ 0.1,0.095,0.09,0.7 },{ 0.5,0.45,0.4,0.5 },{ 1,0.95,0.9,0.2 },{ 1,0.95,0.9,0.1 },{ 1,0.95,0.9,0.05 },{ 1,0.95,0.9,0.02 },{ 1,0.95,0.9,0 }};
		animationSpeed[] = {0.8,0.3,0.25};
		randomDirectionPeriod = 0.4;
		randomDirectionIntensity = 0.09;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = "2.5 + 1.25 * intensity";
		positionVar[] = {"0.2 + 1.25 * intensity","0.2 + 1.25 * intensity","0.2 + 1.25 * intensity"};
		MoveVelocityVar[] = {"0.6 + 1.25 * intensity","0.2 + 1.25 * intensity","0.6 + 1.25 * intensity"};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class HouseDestructionSmoke4: Default
	{
		interval = "0.02 * interval + 0.02";
		circleRadius = 10;
		circleVelocity[] = {"1.4 + 1.4 * intensity",0,"1.4 + 1.4 * intensity"};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "1.25 * intensity + 10";
		moveVelocity[] = {0,0.05,0};
		rotationVelocity = 0;
		weight = 0.051;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {"1.5 * intensity + 6","1.5 * intensity + 20"};
		color[] = {{ 0.1,0.095,0.09,0.7 },{ 0.5,0.45,0.4,0.5 },{ 1,0.95,0.9,0.2 },{ 1,0.95,0.9,0.1 },{ 1,0.95,0.9,0.05 },{ 1,0.95,0.9,0.02 },{ 1,0.95,0.9,0 }};
		animationSpeed[] = {0.8,0.3,0.25};
		randomDirectionPeriod = 0.4;
		randomDirectionIntensity = 0.09;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = "2.5 + 1.25 * intensity";
		positionVar[] = {"0.2 + 1.25 * intensity","0.2 + 1.25 * intensity","0.2 + 1.25 * intensity"};
		MoveVelocityVar[] = {"0.6 + 1.25 * intensity","0.2 + 1.25 * intensity","0.6 + 1.25 * intensity"};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class HouseDestructionSmoke2: Default
	{
		interval = "0.004 * interval + 0.004";
		circleRadius = 8;
		circleVelocity[] = {"-0.6 - 1.6 * intensity",0,"-0.6 - 1.6 * intensity"};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "3 * intensity + 14";
		moveVelocity[] = {0,"3 + 1.25 * intensity",0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {"1.5 * intensity + 5","1.5 * intensity + 14"};
		color[] = {{ 1,0.8,0.7,0.1 },{ 1,0.8,0.7,0.1 },{ 1,0.8,0.7,0.1 },{ 1,0.8,0.7,0.1 },{ 1,0.8,0.7,0.05 },{ 1,0.8,0.7,0.02 },{ 1,0.8,0.7,0 }};
		animationSpeed[] = {0.8,0.3,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = "2.5 + 1.25 * intensity";
		positionVar[] = {"0.2 + 1.25 * intensity","0.2 + 1.25 * intensity","0.2 + 1.25 * intensity"};
		MoveVelocityVar[] = {0.3,"3 + 1.4 * intensity",0.3};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class HouseDestructionSmoke3: Default
	{
		interval = "0.004 * interval + 0.004";
		circleRadius = 8;
		circleVelocity[] = {"-0.6 - 1.6 * intensity",0,"-0.6 - 1.6 * intensity"};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "1.5 * intensity + 5";
		moveVelocity[] = {0,"2.75 + 1.25 * intensity",0};
		rotationVelocity = 0;
		weight = 0.056;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {"1.4 * intensity + 3","1.4 * intensity + 15"};
		color[] = {{ 0.1,0.08,0.07,0.7 },{ 0.5,0.4,0.35,0.5 },{ 1,0.8,0.7,0.2 },{ 1,0.8,0.7,0.1 },{ 1,0.8,0.7,0.05 },{ 1,0.8,0.7,0.02 },{ 1,0.8,0.7,0 }};
		animationSpeed[] = {0.8,0.3,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = "2.5 + 1.25 * intensity";
		positionVar[] = {"0.2 + 1.25 * intensity","0.2 + 1.25 * intensity","0.2 + 1.25 * intensity"};
		MoveVelocityVar[] = {0.3,"4 + 1.4 * intensity",0.3};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class HouseDestrSmokeLong: Default
	{
		interval = "0.04";
		circleRadius = 10;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 120;
		moveVelocity[] = {0,0.01,0};
		rotationVelocity = 0;
		weight = 1.276;
		volume = 1;
		rubbing = 0.01;
		size[] = {0.8,3,5,10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15};
		color[] = {{ 0.5,0.5,0.5,0.25 },{ 0.5,0.5,0.5,0.25 },{ 0.5,0.5,0.5,0.25 },{ 0.5,0.5,0.5,0.2 },{ 0.5,0.5,0.5,0.1 },{ 0.5,0.5,0.5,0.05 },{ 0.5,0.5,0.5,0.05 },{ 0.5,0.5,0.5,0 }};
		animationSpeed[] = {0};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = "30";
		positionVar[] = {10,1,10};
		MoveVelocityVar[] = {0.4,0.1,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HousePartDust: Default
	{
		interval = 0.0015;
		circleRadius = 1.5;
		circleVelocity[] = {0.5,0,0.5};
		onSurface = 0;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,0.5,0};
		rotationVelocity = 0;
		weight = 0.055;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {3,5};
		color[] = {{ 0.1,0.08,0.07,0.5 },{ 1,0.8,0.7,0.4 },{ 1,0.8,0.7,0.2 },{ 1,0.8,0.7,0.1 },{ 1,0.8,0.7,0.05 },{ 1,0.8,0.7,0 }};
		animationSpeed[] = {0.8,0.3,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.25;
		positionVar[] = {0.75,2,0.75};
		MoveVelocityVar[] = {0.2,1,0.2};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HousePartDustLong: Default
	{
		interval = 0.0015;
		circleRadius = 1.5;
		circleVelocity[] = {0,0,0};
		onSurface = 0;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {3,8};
		color[] = {{ 0.8,0.8,0.8,0.4 },{ 0.8,0.8,0.8,0.3 },{ 0.8,0.8,0.8,0.1 },{ 0.8,0.8,0.8,0.0 }};
		animationSpeed[] = {0.8,0.3,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.25;
		positionVar[] = {3,3,3};
		MoveVelocityVar[] = {0.01,0.01,0.01};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HousePartWall: Default
	{
		interval = 0.015;
		circleRadius = 1.5;
		circleVelocity[] = {0,0,0};
		onSurface = 0;
		particleShape = "\Ca\Data\ParticleEffects\WallPart\WallPart.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0.5;
		weight = 10;
		volume = 1;
		rubbing = 0;
		size[] = {2};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.25;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {1,0.01,1};
		rotationVelocityVar = 1;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SmokeShellWhite: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = "0.03";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "20";
		moveVelocity[] = {0.2,0.1,0.1};
		rotationVelocity = 1;
		weight = 1.2777;
		volume = 1;
		rubbing = 0.015;
		size[] = {0.1,2,6};
		color[] = {{ 0.9,0.9,0.9,0.2 },{ 0.9,0.9,0.9,0.05 },{ 0.9,0.9,0.9,0 }};
		animationSpeed[] = {1.5,0.5};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SmokeShellWhite2: SmokeShellWhite
	{
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		color[] = {{ 0.9,0.9,0.9,1 },{ 0.9,0.9,0.9,0.5 },{ 0.9,0.9,0.9,0 }};
	};
	class CannonFlash: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = "0.03";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.075;
		size[] = {5,12};
		color[] = {{ 1,1,1,-2 },{ 1,1,1,-2 },{ 1,1,1,-1 },{ 1,1,1,0 }};
		animationSpeed[] = {3};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {5,5,5};
		rotationVelocityVar = 1;
		sizeVar = 6;
		colorVar[] = {0,0,0,0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class CannonSmoke: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = "0.01";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.4;
		size[] = {2,12};
		color[] = {{ 0.6,0.6,0.6,0 },{ 0.7,0.7,0.7,0.8 },{ 0.7,0.7,0.7,0.7 },{ 0.8,0.8,0.8,0.35 },{ 0.9,0.9,0.9,0.15 },{ 1,1,1,0 }};
		animationSpeed[] = {2,0.7,0.5};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {3,3,3};
		rotationVelocityVar = 20;
		sizeVar = 6;
		colorVar[] = {0,0,0,0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class heavyCaliber1: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = "0.1";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.3;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.104;
		rubbing = 0.5;
		size[] = {0.4,2.5};
		color[] = {{ 0.3,0.3,0.3,0 },{ 0.5,0.5,0.5,0.25 },{ 0.7,0.7,0.7,0 }};
		animationSpeed[] = {2};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0.0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class heavyCaliber2: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = "0.1";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.3;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.104;
		rubbing = 0.5;
		size[] = {0.4,2.5};
		color[] = {{ 0.7,0.7,0.7,0.2 },{ 0.8,0.8,0.8,0 }};
		animationSpeed[] = {2};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0.0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsBig1: Default
	{
		interval = "0.025 * interval + 0.025";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,2.5,0};
		rotationVelocity = 1;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 2","0.0125 * intensity + 10","0.0125 * intensity + 12"};
		color[] = {{ 0.1,0.087,0.062,0.7 },{ 1,0.87,0.62,0.05 },{ 1,1,1,0 }};
		animationSpeed[] = {0.7};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {1.5,2,1.5};
		MoveVelocityVar[] = {2,2.5,2};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactStones1: Default
	{
		interval = "0.05 * interval + 0.05";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\Ca\Data\ParticleEffects\pstone\pstone.p3d";
		animationName = "";
		particleType = "spaceobject";
		timerPeriod = 0.1;
		lifeTime = 1;
		moveVelocity[] = {0,"4 * intensity + 2",0};
		rotationVelocity = 1;
		weight = 10;
		volume = 0.1;
		rubbing = 0;
		size[] = {0.1};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1,1.5,1};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactSandBlow1: Default
	{
		interval = "interval + 1";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 10;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.3;
		moveVelocity[] = {0,0.5,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 0.7;
		rubbing = 0;
		size[] = {0.5,"5 * intensity"};
		color[] = {{ 0.3,0.2,0.1,1 },{ 0.3,0.2,0.1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactSandBlow2: Default
	{
		interval = "0.02 * interval + 0.02";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.7;
		moveVelocity[] = {0,"0.125 * intensity + 3",0};
		rotationVelocity = 0;
		weight = 4;
		volume = 0.1;
		rubbing = 0.4;
		size[] = {0.3,"0.9 * intensity + 0.4"};
		color[] = {{ 0.4,0.3,0.2,0.7 },{ 0.4,0.3,0.2,0.4 },{ 0.4,0.3,0.2,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1,"2 * intensity",1};
		rotationVelocityVar = 1;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactSandBlow3: Default
	{
		interval = "interval";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 12;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.7;
		moveVelocity[] = {0,0.3,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 0.7;
		rubbing = 0;
		size[] = {0.3,"4 * intensity"};
		color[] = {{ 0.65,0.55,0.45,0.25 },{ 0.65,0.55,0.45,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactSandSmoke1: Default
	{
		interval = "0.5 * interval + 0.01";
		circleRadius = "0.3*intensity";
		circleVelocity[] = {"0.5*intensity",0,"0.5*intensity"};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.15;
		size[] = {0.2,"0.8 * intensity + 0.4"};
		color[] = {{ 0.6,0.5,0.4,0.5 },{ 0.6,0.5,0.4,0.4 },{ 0.6,0.5,0.4,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.4,0,0.4};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactSandSmoke2: Default
	{
		interval = "0.004";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 9;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.8;
		moveVelocity[] = {"(- inDirX + surfNormalX) * inSpeed / 250 * 0.66","( - inDirY + surfNormalY) * inSpeed / 250 * 0.66","(- inDirZ + surfNormalZ) * inSpeed / 250 * 0.66"};
		rotationVelocity = 0;
		weight = 5;
		volume = 0.1;
		rubbing = 0.2;
		size[] = {0.3,0.3};
		color[] = {{ 0.3,0.3,0.3,0.2 },{ 0.3,0.3,0.3,0.1 },{ 0.3,0.3,"0.S3",0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0.1,0};
		MoveVelocityVar[] = {1,"2 * intensity * 0.66",1};
		rotationVelocityVar = 1;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactSandSmoke3: Default
	{
		interval = "0.1 * interval + 0.1";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,"intensity * 0.2 * 0.66",0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.3;
		size[] = {0.2,"6 * intensity + 0.7"};
		color[] = {{ 0.8,0.7,0.6,0 },{ 0.8,0.7,0.6,0.1 },{ 0.8,0.7,0.6,0.08 },{ 0.8,0.7,0.6,0.04 },{ 0.8,0.7,0.6,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.2,"0.2 * intensity * 0.66",0.2};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Blood: Default
	{
		interval = "0.02";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.2;
		moveVelocity[] = {"(- inDirX * 2 + surfNormalX / 4) * inSpeed / 350 * 0.66","( - inDirY * 2 + surfNormalY / 4) * inSpeed / 350 * 0.66","( - inDirZ * 2 + surfNormalZ / 4) * inSpeed / 350 * 0.66"};
		rotationVelocity = 1;
		weight = 0.17;
		volume = 0.1;
		rubbing = 0.05;
		size[] = {0.15,0.25};
		color[] = {{ 0.5,0.5,0.5,1 },{ 0.5,0.5,0.5,0 }};
		animationSpeed[] = {0.1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {0.15,0.15,0.15};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0.2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater1: Default
	{
		interval = 1000;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 14;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0;
		moveVelocity[] = {0,0.7,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 1;
		rubbing = 0;
		size[] = {0};
		color[] = {{ 1,1,1,1 },{ 1,1,1,0.5 },{ 1,1,1,0.25 },{ 1,1,1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater2: Default
	{
		interval = 0.005;
		circleRadius = 0.001;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 15;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.6;
		moveVelocity[] = {0,0.5,0};
		rotationVelocity = 1;
		weight = 1.5;
		volume = 1;
		rubbing = 0;
		size[] = {0,"4.5 * intensity"};
		color[] = {{ 1,1,1,0.2 },{ 1,1,1,1 },{ 1,1,1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater3: Default
	{
		interval = "0.01 * interval + 0.01";
		circleRadius = 0.01;
		circleVelocity[] = {0.4,0,0.4};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 16;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,0.1,0};
		rotationVelocity = 1;
		weight = 1.3;
		volume = 1;
		rubbing = 0;
		size[] = {0,"intensity"};
		color[] = {{ 0.9,0.95,1,0.1 },{ 0.9,0.95,1,0.3 },{ 0.9,0.95,1,0.15 },{ 0.8,0.9,1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.1,0,0.1};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater4: Default
	{
		interval = "0.01 * interval + 0.01";
		circleRadius = 0.01;
		circleVelocity[] = {0.05,1,0.05};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 16;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.8;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 1;
		weight = 2;
		volume = 0.1;
		rubbing = 0;
		size[] = {0,"0.9 * intensity","2 * intensity"};
		color[] = {{ 1,1,1,0.2 },{ 1,1,1,0.1 },{ 1,1,1,0.05 },{ 1,1,1,0.04 },{ 1,1,1,0.03 },{ 1,1,1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,2,0};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater5: Default
	{
		interval = "0.02 * interval + 0.02";
		circleRadius = 0.01;
		circleVelocity[] = {0.1,1,0.1};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 16;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.3;
		volume = 1;
		rubbing = 0.1;
		size[] = {0,"4 * intensity","7 * intensity"};
		color[] = {{ 1,1,1,0 },{ 1,1,1,0.1 },{ 1,1,1,0.05 },{ 1,1,1,0.05 },{ 1,1,1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,2,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater6: Default
	{
		interval = "0.01 * interval + 0.01";
		circleRadius = 0.01;
		circleVelocity[] = {0.1,1,0.1};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 16;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 1;
		weight = 2;
		volume = 0.1;
		rubbing = 0;
		size[] = {0,0.03,0.03,0.03,0.1,0.3,0.5,0.7};
		color[] = {{ 1,1,1,0.5 },{ 1,1,1,0.7 },{ 1,1,1,0.05 },{ 1,1,1,0.05 },{ 1,1,1,0.05 },{ 1,1,1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,3,0};
		rotationVelocityVar = 1;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater7: Default
	{
		interval = "0.0025 * interval + 0.0025";
		circleRadius = 0.01;
		circleVelocity[] = {0.01,1,0.01};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 16;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.5;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 1;
		weight = 2;
		volume = 1;
		rubbing = 0.05;
		size[] = {0,0.03,0.02,0.01,0.005,0};
		color[] = {{ 1,1,1,0.5 },{ 1,1,1,0.7 },{ 1,1,1,0.7 },{ 1,1,1,0.7 },{ 1,1,1,0.7 },{ 1,1,1,0.7 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.4;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.5,1.5,0.5};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactSparks1: Default
	{
		interval = 0.003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.3;
		moveVelocity[] = {"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 150 * 0.66","( - inDirY * 2 + surfNormalY / 2) * inSpeed / 150 * 0.66","( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 150 * 0.66"};
		rotationVelocity = 1;
		weight = 0.5;
		volume = 0.1;
		rubbing = 0.0;
		size[] = {"0.05 * intensity",0};
		sizeCoef = 1;
		color[] = {{ 1,1,1,-50 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {0,0,0};
		positionVar[] = {0.05,0.05,0.05};
		moveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0.05,0.05,0.05,5};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactSparks2: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.15;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.275;
		volume = 1;
		rubbing = 0.0;
		size[] = {"0.1 + intensity * 0.25","0.1 + intensity * 0.2",0};
		sizeCoef = 1;
		color[] = {{ 1,1,1,-50 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.05;
		position[] = {0,0,0};
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0.05;
		colorVar[] = {0.05,0.05,0.05,5};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactSmoke: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 1;
		moveVelocity[] = {"surfNormalX * inSpeed / 250 * 0.66","surfNormalY * inSpeed / 250 * 0.66","surfNormalZ * inSpeed / 250 * 0.66"};
		rotationVelocity = 1;
		weight = 1.28;
		volume = 1;
		rubbing = 0.5;
		size[] = {0.5,0.7};
		sizeCoef = 1;
		color[] = {{ 0.3,0.3,0.3,0.5 },{ 0.4,0.4,0.4,0.25 },{ 0.5,0.5,0.5,0.15 },{ 0.6,0.6,0.6,0.07 },{ 0.8,0.8,0.8,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = {0,0,0};
		positionVar[] = {0.2,0.2,0.2};
		moveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.15;
		colorVar[] = {0.05,0.05,0.05,0.3};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactSmoke2: Default
	{
		interval = 0.006;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 1.5;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.28;
		volume = 1;
		rubbing = 0.25;
		size[] = {"0.2 + intensity * 0.5","0.2 + intensity * 0.8","0.2 + intensity * 1.1","0.2 + intensity * 1.3","0.2 + intensity * 1.4"};
		sizeCoef = 1;
		color[] = {{ 0.15,0.15,0.15,0.5 },{ 0.2,0.2,0.2,0.25 },{ 0.25,0.25,0.25,0.15 },{ 0.3,0.3,0.3,0.07 },{ 0.4,0.4,0.4,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = {0,0,0};
		positionVar[] = {0.15,0.15,0.15};
		moveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.15;
		colorVar[] = {0.05,0.05,0.05,0.3};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactDustPlaster: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 2;
		moveVelocity[] = {"(surfNormalX / 2) * inSpeed / 200 * 0.66","(surfNormalY / 2) * inSpeed / 200 * 0.66","(surfNormalZ / 2) * inSpeed / 200 * 0.66"};
		rotationVelocity = 1;
		weight = 1.3;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.3,0.6};
		sizeCoef = 1;
		color[] = {{ 0.2,0.175,0.15,1 },{ 0.6,0.57,0.45,0.08 },{ 0.8,0.7,0.6,0.06 },{ 0.8,0.7,0.6,0.04 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = {0,0,0};
		positionVar[] = {0.1,0.1,0.1};
		moveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.5;
		colorVar[] = {0.05,0.05,0.05,0.2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactDustConcrete: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 1;
		moveVelocity[] = {"(surfNormalX / 2) * inSpeed / 350 * 0.66","(surfNormalY / 2) * inSpeed / 350 * 0.66","(surfNormalZ / 2) * inSpeed / 350 * 0.66"};
		rotationVelocity = 1;
		weight = 1.3;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.4,0.8};
		sizeCoef = 1;
		color[] = {{ 0.2,0.2,0.25,1 },{ 0.6,0.6,0.7,0.1 },{ 0.6,0.6,0.7,0.08 },{ 0.6,0.6,0.7,0.06 },{ 0.7,0.7,0.8,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = {0,0,0};
		positionVar[] = {0.1,0.1,0.1};
		moveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.5;
		colorVar[] = {0.05,0.05,0.05,0.2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactDustConcrete2: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 1;
		moveVelocity[] = {"(outDirX / 2) * outSpeed / 150 * 0.66","(outDirY / 2) * outSpeed / 150 * 0.66","(outDirZ / 2) * outSpeed / 150 * 0.66"};
		rotationVelocity = 1;
		weight = 1.3;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.4,0.8};
		sizeCoef = 1;
		color[] = {{ 0.2,0.2,0.25,1 },{ 0.6,0.6,0.7,0.1 },{ 0.6,0.6,0.7,0.08 },{ 0.6,0.6,0.7,0.06 },{ 0.7,0.7,0.8,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = {0,0,0};
		positionVar[] = {0.1,0.1,0.1};
		moveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.5;
		colorVar[] = {0.05,0.05,0.05,0.2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactConcrete: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\Ca\Data\ParticleEffects\pstone\pstone.p3d";
		animationName = "";
		particleType = "spaceobject";
		timerPeriod = 0.1;
		lifeTime = 1;
		moveVelocity[] = {"(surfNormalX / 2) * inSpeed / 150 * 0.66","(surfNormalY / 2) * inSpeed / 150 * 0.66","(surfNormalZ / 2) * inSpeed / 150 * 0.66"};
		rotationVelocity = 1;
		weight = 5;
		volume = 1;
		rubbing = 0.03;
		size[] = {0.08};
		color[] = {{ 0.5,0.5,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.05,0.05,0.05};
		moveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 1;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactConcrete2: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\Ca\Data\ParticleEffects\pstone\pstone.p3d";
		animationName = "";
		particleType = "spaceobject";
		timerPeriod = 0.1;
		lifeTime = 1;
		moveVelocity[] = {"(outDirX / 2) * outSpeed / 150 * 0.66","(outDirY / 2) * outSpeed / 150 * 0.66","(outDirZ / 2) * outSpeed / 150 * 0.66"};
		rotationVelocity = 1;
		weight = 5;
		volume = 1;
		rubbing = 0.03;
		size[] = {0.08};
		color[] = {{ 0.5,0.5,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.05,0.05,0.05};
		moveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 1;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactDustWood: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.6;
		moveVelocity[] = {"(surfNormalX / 2) * inSpeed / 350 * 0.66","(surfNormalY / 2) * inSpeed / 350 * 0.66","(surfNormalZ / 2) * inSpeed / 350 * 0.66"};
		rotationVelocity = 1;
		weight = 1.3;
		volume = 1;
		rubbing = 0.4;
		size[] = {"0.5 + intensity * 0.6","0.5 + intensity * 1","0.5 + intensity * 1.2","0.5 + intensity * 1.3","0.5 + intensity * 1.4"};
		sizeCoef = 1;
		color[] = {{ 0.6,0.5,0.4,0.2 },{ 0.6,0.5,0.4,0.1 },{ 0.6,0.5,0.4,0.05 },{ 0.7,0.6,0.5,0.025 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = {0,0,0};
		positionVar[] = {0.1,0.1,0.1};
		moveVelocityVar[] = {0.05,0.05,0.05};
		rotationVelocityVar = 0;
		sizeVar = 0.35;
		colorVar[] = {0.05,0.05,0.05,0.2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class WoodChippings: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\WoodChippings";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 1;
		moveVelocity[] = {"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 350 * 0.66","( - inDirY * 2 + surfNormalY / 2) * inSpeed / 350 * 0.66","( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 350 * 0.66"};
		rotationVelocity = 2;
		weight = 4;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.05};
		sizeCoef = 1;
		color[] = {{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {0};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {0,0,0};
		positionVar[] = {0.05,0.05,0.05};
		moveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.05;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class WoodChippings2: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\WoodChippings";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 1;
		moveVelocity[] = {"(outDirX * 2) * outSpeed / 250 * 0.66","(outDirY * 2) * outSpeed / 250 * 0.66","(outDirZ * 2) * outSpeed / 250 * 0.66"};
		rotationVelocity = 2;
		weight = 4;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.05};
		sizeCoef = 1;
		color[] = {{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {0};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {0,0,0};
		positionVar[] = {0.05,0.05,0.05};
		moveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.05;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class WoodHole: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\WoodChippings";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 20;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {0.03,0.03,0.03,0.03,0.03,0};
		sizeCoef = 1;
		color[] = {{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {0};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		position[] = {0,0,0};
		positionVar[] = {0.01,0.01,0.01};
		moveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0.1;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class LeavesFall: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		particleShape = "\Ca\Data\ParticleEffects\Hit_Leaves\Leaves.p3d";
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 5;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.5;
		volume = 1;
		rubbing = 0.2;
		size[] = {1.5};
		sizeCoef = 1;
		color[] = {{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {0,0,0};
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {0.15,0.15,0.15};
		rotationVelocityVar = 0;
		sizeVar = 0.5;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class LeavesFallGreen: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		particleShape = "\Ca\Ca_E\Data\ParticleEffects\Hit_Leaves\Leaves_Green.p3d";
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 5;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.5;
		volume = 1;
		rubbing = 0.2;
		size[] = {1.5};
		sizeCoef = 1;
		color[] = {{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {0,0,0};
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {0.15,0.15,0.15};
		rotationVelocityVar = 0;
		sizeVar = 0.5;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SticksFall: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		particleShape = "\Ca\Data\ParticleEffects\Hit_Leaves\Sticks.p3d";
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 5;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.7;
		volume = 1;
		rubbing = 0.1;
		size[] = {1.2};
		sizeCoef = 1;
		color[] = {{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {0,0,0};
		positionVar[] = {0.05,0.05,0.05};
		moveVelocityVar[] = {0.5,0,0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.2;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SticksFallGreen: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		particleShape = "\Ca\Ca_E\Data\ParticleEffects\Hit_Leaves\Sticks_Green.p3d";
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 5;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.7;
		volume = 1;
		rubbing = 0.1;
		size[] = {1.2};
		sizeCoef = 1;
		color[] = {{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {0,0,0};
		positionVar[] = {0.05,0.05,0.05};
		moveVelocityVar[] = {0.5,0,0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.2;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ImpactGlass: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 1;
		moveVelocity[] = {"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 150 * 0.3","( - inDirY * 2 + surfNormalY / 2) * inSpeed / 150 * 0.3","( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 150 * 0.3"};
		rotationVelocity = 1;
		weight = 1.4;
		volume = 1;
		rubbing = 0.1;
		size[] = {"intensity * 0.5","intensity * 1","intensity * 1.2","intensity * 1.3"};
		sizeCoef = 1;
		color[] = {{ 0.7,0.7,1,0.8 },{ 0.7,0.7,1,0.5 },{ 0.7,0.7,1,0.3 },{ 0.7,0.7,1,0.15 },{ 0.7,0.7,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = {0,0,0};
		positionVar[] = {0.1,0.1,0.1};
		moveVelocityVar[] = {0.05,0.05,0.05};
		rotationVelocityVar = 0;
		sizeVar = 0.5;
		colorVar[] = {0.05,0.05,0.05,0.2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class GlassShards: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 1;
		moveVelocity[] = {"(- inDirX * 1.5) * inSpeed / 150 * 0.3","( - inDirY * 1.5) * inSpeed / 150 * 0.3","( - inDirZ * 1.5) * inSpeed / 150 * 0.3"};
		rotationVelocity = 2;
		weight = 10;
		volume = 1;
		rubbing = 0.0;
		size[] = {"0.05"};
		sizeCoef = 1;
		color[] = {{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {0,0,0};
		positionVar[] = {0.02,0.02,0.02};
		moveVelocityVar[] = {0.2,0.2,0.2};
		rotationVelocityVar = 0;
		sizeVar = 0.04;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class GlassShards2: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 1;
		moveVelocity[] = {"(outDirX * 1.5) * outSpeed / 150 * 0.3","(outDirY * 1.5) * outSpeed / 150 * 0.3","(outDirZ * 1.5) * outSpeed / 150 * 0.3"};
		rotationVelocity = 2;
		weight = 10;
		volume = 1;
		rubbing = 0.0;
		size[] = {"0.05"};
		sizeCoef = 1;
		color[] = {{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {0,0,0};
		positionVar[] = {0.02,0.02,0.02};
		moveVelocityVar[] = {0.2,0.2,0.2};
		rotationVelocityVar = 0;
		sizeVar = 0.04;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class GlassDust: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.2;
		moveVelocity[] = {"(- inDirX * 4) * inSpeed / 150 * 0.2","(- inDirY * 4) * inSpeed / 150 * 0.2","(-inDirZ * 4) * inSpeed / 150 * 0.2"};
		rotationVelocity = 2;
		weight = 1.275;
		volume = 1;
		rubbing = 0.0;
		size[] = {0.05,0.15};
		sizeCoef = 1;
		color[] = {{ 0.5,0.5,0.5,0.1 },{ 0.5,0.5,0.5,0.0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {0,0,0};
		positionVar[] = {0.02,0.02,0.02};
		moveVelocityVar[] = {0.2,0.2,0.2};
		rotationVelocityVar = 0;
		sizeVar = 0.04;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class GlassHole: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 20;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {0.03,0.03,0.03,0.03,0.03,0};
		sizeCoef = 1;
		color[] = {{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {0};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		position[] = {0,0,0};
		positionVar[] = {0.01,0.01,0.01};
		moveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0.1;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ExplosionEffectsWater: Default
	{
		interval = 0.01;
		circleRadius = 2;
		circleVelocity[] = {3,15,3};
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 6;
		particleFSLoop = 0;
		angleVar = 1;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 4;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 30;
		volume = 7.9;
		rubbing = 0.075;
		size[] = {8,15};
		sizeCoef = 1;
		color[] = {{ 0.7,0.7,0.7,1 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		position[] = {0,0,0};
		positionVar[] = {2,0,2};
		moveVelocityVar[] = {2,7,2};
		rotationVelocityVar = 0;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class MissileFire: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 3;
		particleFSFrameCount = 48;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.05;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 10.5;
		volume = 7.9;
		rubbing = 0.2;
		size[] = {0.6,0};
		color[] = {{ 1,1,1,-2 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.4;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.01;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 100;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class MissileManualEffects1: Default
	{
		interval = "0.005";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 0.3;
		particleFSLoop = 0;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {0.5,10};
		color[] = {{ 1,1,1,0.1 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class MissileEffects1: Default
	{
		interval = "0.005";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 0.3;
		particleFSLoop = 0;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {0.5,10};
		color[] = {{ 1,1,1,0.1 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Missile1: Default
	{
		interval = "0.002";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.6;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1,3.5,4.5};
		color[] = {{ 0.3,0.3,0.3,0.35 },{ 0.4,0.4,0.4,0.1 },{ 0.8,0.8,0.8,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 20;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Missile2: Default
	{
		interval = "0.003";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1,2};
		color[] = {{ 0.4,0.4,0.4,0.07 },{ 0.6,0.6,0.6,0 }};
		animationSpeed[] = {5};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {3,3,3};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Missile3: Default
	{
		interval = "0.002";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.5;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {2.5,3.5,4};
		color[] = {{ 0.8,0.8,0.8,0.6 },{ 0.9,0.9,0.9,0.3 },{ 1,1,1,0 }};
		animationSpeed[] = {5};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.4,0.4,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Missile4: Default
	{
		interval = "0.003";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.5;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1.5,3};
		color[] = {{ 0.8,0.8,0.8,0.25 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.4,0.4,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Missile5: Default
	{
		interval = "0.003";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 7;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {3,9};
		color[] = {{ 0.8,0.8,0.8,0.8 },{ 0.9,0.9,0.9,0.4 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 3;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.4,0.4,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ExhaustSmoke1: Default
	{
		interval = "0.1 - 0.095 * intensity";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.8;
		moveVelocity[] = {"speedX","speedY","speedZ"};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.15,0.5};
		sizeCoef = 1;
		color[] = {{ 0.06,0.06,0.06,0.2 },{ 0.6,0.6,0.6,0.1 },{ 0.6,0.6,0.6,0 }};
		colorCoef[] = {"1 - damage","1 - damage","1 - damage","intensity * 0.5"};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.1,0.1,0.1};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ExhaustSmokeBig1: Default
	{
		interval = "0.1 - 0.075 * intensity";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.8;
		moveVelocity[] = {"speedX","speedY","speedZ"};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1.5;
		rubbing = 0.1;
		size[] = {1,5};
		sizeCoef = 1;
		color[] = {{ 0.06,0.06,0.06,0.2 },{ 0.6,0.6,0.6,0.1 },{ 0.6,0.6,0.6,0 }};
		colorCoef[] = {"1 - damage","1 - damage","1 - damage","intensity * 1.15"};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.2,0.2,0.2};
		MoveVelocityVar[] = {0.1,0.1,0.1};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class LeftDust1: Default
	{
		interval = "0.20 - 0.17 * density";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2.6;
		moveVelocity[] = {"speedX","speedY","speedZ"};
		rotationVelocity = 1;
		weight = 1.3;
		volume = 1;
		rubbing = 0.5;
		size[] = {0.8,3,5,15};
		sizeCoef = 1;
		color[] = {{ 0.5,0.5,0.5,0 },{ 0.5,0.5,0.5,0.25 },{ 0.5,0.5,0.5,0.25 },{ 0.5,0.5,0.5,0.2 },{ 0.5,0.5,0.5,0.1 },{ 0.5,0.5,0.5,0.05 },{ 0.5,0.5,0.5,0.05 },{ 0.5,0.5,0.5,0 }};
		colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor","1 * density"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {0.15,0.15,0.15};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RightDust1: Default
	{
		interval = "0.20 - 0.17 * density";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2.6;
		moveVelocity[] = {"speedX","speedY + 0.5","speedZ"};
		rotationVelocity = 1;
		weight = 1.3;
		volume = 1;
		rubbing = 0.5;
		size[] = {0.8,3,5,15};
		sizeCoef = 1;
		color[] = {{ 0.5,0.5,0.5,0 },{ 0.5,0.5,0.5,0.25 },{ 0.5,0.5,0.5,0.25 },{ 0.5,0.5,0.5,0.2 },{ 0.5,0.5,0.5,0.1 },{ 0.5,0.5,0.5,0.05 },{ 0.5,0.5,0.5,0.05 },{ 0.5,0.5,0.5,0 }};
		colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor","1 * density"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {0.15,0.15,0.15};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class LeftDustLong: Default
	{
		interval = "0.35 - 0.17 * density";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 60;
		moveVelocity[] = {"speedX","speedY + 0.5","speedZ"};
		rotationVelocity = 1;
		weight = 1.285;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.8,3,5,10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15};
		sizeCoef = 1;
		color[] = {{ 0.5,0.5,0.5,0.05 },{ 0.5,0.5,0.5,0.05 },{ 0.5,0.5,0.5,0.045 },{ 0.5,0.5,0.5,0.04 },{ 0.5,0.5,0.5,0.03 },{ 0.5,0.5,0.5,0.02 },{ 0.5,0.5,0.5,0.1 },{ 0.5,0.5,0.5,0 }};
		colorCoef[] = {"1 + 0.01 * dustColor","1 - 0.04 * dustColor","1 - 0.12 * dustColor","1"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 30;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {1.5,0.05,1.5};
		rotationVelocityVar = 10;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RightDustLong: Default
	{
		interval = "0.35 - 0.17 * density";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 60;
		moveVelocity[] = {"speedX","speedY","speedZ"};
		rotationVelocity = 1;
		weight = 1.285;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.8,3,5,10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15};
		sizeCoef = 1;
		color[] = {{ 0.5,0.5,0.5,0.05 },{ 0.5,0.5,0.5,0.05 },{ 0.5,0.5,0.5,0.045 },{ 0.5,0.5,0.5,0.04 },{ 0.5,0.5,0.5,0.03 },{ 0.5,0.5,0.5,0.02 },{ 0.5,0.5,0.5,0.1 },{ 0.5,0.5,0.5,0 }};
		colorCoef[] = {"1 + 0.01 * dustColor","1 - 0.04 * dustColor","1 - 0.12 * dustColor","1"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 30;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {1.5,0.05,1.5};
		rotationVelocityVar = 10;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RightWater1: Default
	{
		interval = "0.05 - 0.045 * density";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 6;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {"speedX","speedY + 1","speedZ"};
		rotationVelocity = 1;
		weight = 2;
		volume = 1;
		rubbing = 0.1;
		size[] = {2,6,8};
		sizeCoef = "size";
		color[] = {{ 0.7,0.7,0.7,0.3 },{ 1,1,1,0.0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.5,1,0.5};
		rotationVelocityVar = 30;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class LeftWater1: Default
	{
		interval = "0.05 - 0.045 * density";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 6;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {"speedX","speedY + 1","speedZ"};
		rotationVelocity = 1;
		weight = 2;
		volume = 1;
		rubbing = 0.1;
		size[] = {2,6,8};
		sizeCoef = "size";
		color[] = {{ 0.7,0.7,0.7,0.3 },{ 1,1,1,0.0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.5,1,0.5};
		rotationVelocityVar = 30;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RightEng1: Default
	{
		interval = "0.1 - 0.075 * density";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 6;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {"speedX","speedY + 1","speedZ"};
		rotationVelocity = 1;
		weight = 1.5;
		volume = 1;
		rubbing = 0.1;
		size[] = {2,6,8};
		sizeCoef = "size+0.5";
		color[] = {{ 1,1,1,0.2 },{ 1,1,1,0.0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.5,1,0.5};
		rotationVelocityVar = 30;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class LeftEng1: Default
	{
		interval = "0.1 - 0.075 * density";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 6;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {"speedX","speedY + 1","speedZ"};
		rotationVelocity = 1;
		weight = 1.5;
		volume = 1;
		rubbing = 0.1;
		size[] = {2,6,8};
		sizeCoef = "size+0.5";
		color[] = {{ 1,1,1,0.2 },{ 1,1,1,0.0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.5,1,0.5};
		rotationVelocityVar = 30;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class TankDust1: Default
	{
		interval = 0.022;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3;
		moveVelocity[] = {"speedX*4","speedY*2","speedZ*4"};
		rotationVelocity = 1;
		weight = 1.35;
		volume = 1;
		rubbing = 0.1;
		size[] = {3,6};
		sizeCoef = 1;
		color[] = {{ 0.5,0.4,0.3,0 },{ 0.4,0.4,0.3,0.25 },{ 0.5,0.4,0.3,0.2 },{ 0.5,0.4,0.3,0.1 },{ 0.5,0.4,0.3,0 }};
		colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor",1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.15;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {1.5,0.5,1.5};
		MoveVelocityVar[] = {0.9,0.9,0.9};
		rotationVelocityVar = 20;
		sizeVar = 1.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class TankDust2: Default
	{
		interval = 0.002;
		circleRadius = 6;
		circleVelocity[] = {0,0,5};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.25;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.35;
		volume = 1;
		rubbing = 0.1;
		size[] = {1,5};
		sizeCoef = 1;
		color[] = {{ 0.9,0.8,0.7,0 },{ 0.9,0.8,0.7,0.15 },{ 0.9,0.8,0.7,0.2 },{ 0.9,0.8,0.7,0.1 },{ 0.9,0.8,0.7,0.05 },{ 0.9,0.8,0.7,0 }};
		colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor",1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.06;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.65;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {3,0,3};
		MoveVelocityVar[] = {0.2,0.2,0.2};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class TankDust3: Default
	{
		interval = 0.002;
		circleRadius = 5;
		circleVelocity[] = {0,0,5};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.25;
		moveVelocity[] = {"speedX","speedY","speedZ"};
		rotationVelocity = 1;
		weight = 1.35;
		volume = 1;
		rubbing = 0.1;
		size[] = {1,4};
		sizeCoef = 1;
		color[] = {{ 0.4,0.3,0.2,0 },{ 0.4,0.3,0.2,0.15 },{ 0.4,0.3,0.2,0.1 },{ 0.4,0.3,0.2,0.05 },{ 0.4,0.3,0.2,0.025 },{ 0.4,0.3,0.2,0 }};
		colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor",1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.06;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {4,0,4};
		MoveVelocityVar[] = {0.2,0.2,0.2};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HDust1: Default
	{
		interval = "0.02 - 0.019 * density";
		circleRadius = 1.7;
		circleVelocity[] = {"speed*0.8",0,"speed*0.8"};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1;
		rubbing = 0.1;
		size[] = {5,10};
		sizeCoef = 1;
		color[] = {{ 1,1,0.8,0.0 },{ 1,1,0.8,0.1 },{ 1,1,0.8,0.05 },{ 1,1,0.8,0.01 },{ 1,1,0.8,0.005 },{ 1,1,0.8,0.001 },{ 1,1,0.8,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.4;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.15,0.15,0.15};
		rotationVelocityVar = 30;
		sizeVar = 0.7;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HDust1Long: Default
	{
		interval = "0.25 - 0.17 * density";
		circleRadius = 4.7;
		circleVelocity[] = {"speed*0.2",0,"speed*0.2"};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 60;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.28;
		volume = 1;
		rubbing = 0.1;
		size[] = {5,10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15};
		sizeCoef = 1;
		color[] = {{ 1,1,0.8,0.05 },{ 1,1,0.8,0.04 },{ 1,1,0.8,0.03 },{ 1,1,0.8,0.025 },{ 1,1,0.8,0.0125 },{ 1,1,0.8,0.007 },{ 1,1,0.8,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 30;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.1,0,0.1};
		MoveVelocityVar[] = {1.5,0.05,1.5};
		rotationVelocityVar = 30;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HWater1: Default
	{
		interval = "0.02 - 0.019 * density";
		circleRadius = 1.5;
		circleVelocity[] = {"speed*0.8",0,"speed*0.8"};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1;
		rubbing = 0.1;
		size[] = {3,7};
		sizeCoef = 1;
		color[] = {{ 0.7,0.8,1,0.0 },{ 0.7,0.8,1,0.2 },{ 0.7,0.8,1,0.1 },{ 0.7,0.8,1,0.08 },{ 0.7,0.8,1,0.05 },{ 0.7,0.8,1,0.03 },{ 0.7,0.8,1,0.01 },{ 0.85,0.9,1,0.0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.1,0.1,0.1};
		rotationVelocityVar = 1;
		sizeVar = 0.6;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class DSmoke1: Default
	{
		interval = "0.1 - 0.09 * speed * damage";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2.5;
		moveVelocity[] = {0,-10,0};
		rotationVelocity = 1;
		weight = 3;
		volume = 0.5;
		rubbing = 0.1;
		size[] = {2,20};
		sizeCoef = 1;
		color[] = {{ 0.05,0.05,0.05,0.3 },{ 0.1,0.1,0.1,0.05 },{ 0.2,0.2,0.2,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.15,0.15,0.15};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class DSmoke2: Default
	{
		interval = "0.1 - 0.09 * speed * damage";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3.5;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 3;
		volume = 0.5;
		rubbing = 0.1;
		size[] = {2,35};
		sizeCoef = 1;
		color[] = {{ 0.05,0.05,0.05,0.3 },{ 0.1,0.1,0.1,0.05 },{ 0.2,0.2,0.2,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.15,0.15,0.15};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class WingTrail: Default
	{
		interval = "interval";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 3;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "0.6 * intensity";
		moveVelocity[] = {"speedX","speedY","speedZ"};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.79;
		rubbing = 0.18;
		size[] = {0.5,"1 + intensity / 1.7"};
		sizeCoef = 1;
		color[] = {{ 1,1,1,"0.04 * intensity" },{ 1,1,1,"0.14 * intensity" },{ 1,1,1,"0.04 * intensity" },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 30;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class BodyTrail: Default
	{
		interval = "interval";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 3;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "0.2 * intensity + 0.2";
		moveVelocity[] = {"speedX","speedY","speedZ"};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.79;
		rubbing = 0.18;
		size[] = {1.5,2};
		sizeCoef = 1;
		color[] = {{ 1,1,1,"0.15 * intensity" },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 30;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ScudSmoke: Default
	{
		interval = "0.005 + (1 min speed) * 1000";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 10;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 10.2;
		volume = 7.9;
		rubbing = 0.5;
		size[] = {2,12,15,18,20};
		sizeCoef = 1;
		color[] = {{ 0.9,0.8,0.7,0.35 },{ 0.9,0.8,0.7,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {0.8,0.3,0.25};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.15;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {3,0,3};
		MoveVelocityVar[] = {3,0,3};
		rotationVelocityVar = 40;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ScudFire: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 3;
		particleFSFrameCount = 48;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.15;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 10.5;
		volume = 7.9;
		rubbing = 0.2;
		size[] = {1,0};
		sizeCoef = "density*2+0.4";
		color[] = {{ 1,1,1,-8 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.4;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.05;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 100;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ScudSmoke2: Default
	{
		interval = "0.005 + (1-(1 min speed))*0.5";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Ca_E\data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 10;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 10.2;
		volume = 7.9;
		rubbing = 0.5;
		size[] = {2,10};
		sizeCoef = 1;
		color[] = {{ 0.65,0.65,0.65,0.5 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {0.8,0.3,0.25};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.15;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.5,0,0.5};
		MoveVelocityVar[] = {0.5,0,0.5};
		rotationVelocityVar = 35;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class CfgLights
{
	class CmeasuresLight
	{
		color[] = {1,0.5,0.2};
		ambient[] = {0.8,0.6,0.2};
		brightness = 0.1;
		diffuse[] = {1.0,1.0,1.0};
		position[] = {0,0,0};
	};
	class ScudLight
	{
		color[] = {1,0.5,0.2};
		ambient[] = {0.8,0.6,0.2};
		brightness = 0.1;
		diffuse[] = {1.0,1.0,1.0};
		position[] = {"positionX","positionY","positionZ"};
	};
	class SmallFireLight
	{
		color[] = {8.543,4.124,0.0};
		ambient[] = {0.05,0.04,0.0};
		brightness = 0.04;
		diffuse[] = {"1.0*power","0.8*power","0.6*power"};
		position[] = {0,0,0};
	};
};
class CounterMeasureFlare
{
	class Cmeasures1
	{
		simulation = "particles";
		type = "Cmeasures1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Cmeasures2
	{
		simulation = "particles";
		type = "Cmeasures2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Light1
	{
		simulation = "light";
		type = "CmeasuresLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class CounterMeasureChaff
{
	class Cmeasures1
	{
		simulation = "particles";
		type = "Cmeasures1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Cmeasures2
	{
		simulation = "particles";
		type = "Cmeasures2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Cmeasures3
	{
		simulation = "particles";
		type = "Cmeasures3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Light1
	{
		simulation = "light";
		type = "CmeasuresLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class MissileManualEffects
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class MissileManualEffects01
	{
		simulation = "particles";
		type = "MissileManualEffects1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MissileFire
	{
		simulation = "particles";
		type = "MissileFire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class MissileEffects
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class MissileEffects01
	{
		simulation = "particles";
		type = "MissileEffects1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MissileFire
	{
		simulation = "particles";
		type = "MissileFire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class Missile1
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class MissileEffects1
	{
		simulation = "particles";
		type = "Missile1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MissileFire
	{
		simulation = "particles";
		type = "MissileFire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class Missile2
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class Missile2
	{
		simulation = "particles";
		type = "Missile2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MissileFire
	{
		simulation = "particles";
		type = "MissileFire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class Missile3
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class Missile3
	{
		simulation = "particles";
		type = "Missile3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MissileFire
	{
		simulation = "particles";
		type = "MissileFire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class Missile4
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class Missile4
	{
		simulation = "particles";
		type = "Missile4";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MissileFire
	{
		simulation = "particles";
		type = "MissileFire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class Missile5
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class Missile5
	{
		simulation = "particles";
		type = "Missile5";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MissileFire
	{
		simulation = "particles";
		type = "MissileFire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactEffectsBig
{
	class CircleDust1
	{
		simulation = "particles";
		type = "CircleDustBig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmokeTrails1
	{
		simulation = "particles";
		type = "SmokeTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class BigSmoke1
	{
		simulation = "particles";
		type = "SmokeBig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "SmallSmokeFast1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke2
	{
		simulation = "particles";
		type = "SmallSmokeFast2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke3
	{
		simulation = "particles";
		type = "SmallSmokeSlow1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke4
	{
		simulation = "particles";
		type = "SmallSmokeSlow2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class GrenadeCrater
{
	class Grenadedust
	{
		simulation = "particles";
		type = "CircleDustSmall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
	};
	class GrenadeStones
	{
		simulation = "particles";
		type = "GrenadeStones";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};
class MortarCrater
{
	class MortarDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
	};
	class MortarDirt
	{
		simulation = "particles";
		type = "DirtMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};
class ATMissileCrater
{
	class MissileCircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class RocketSmokeTrails1
	{
		simulation = "particles";
		type = "RocketSmokeTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class RocketSmokeTrails2
	{
		simulation = "particles";
		type = "RocketSmokeTrails2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
};
class AAMissileCrater
{
	class MissileCircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class RocketSmokeTrails1
	{
		simulation = "particles";
		type = "RocketSmokeTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class RocketSmokeTrails2
	{
		simulation = "particles";
		type = "RocketSmokeTrails2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class CircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};
class ATRocketCrater
{
	class MissileCircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class RocketSmokeTrails1
	{
		simulation = "particles";
		type = "RocketSmokeTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class RocketSmokeTrails2
	{
		simulation = "particles";
		type = "RocketSmokeTrails2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
};
class HERocketCrater
{
	class MissileCircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class RocketSmokeTrails1
	{
		simulation = "particles";
		type = "RocketSmokeTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class RocketSmokeTrails2
	{
		simulation = "particles";
		type = "RocketSmokeTrails2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
};
class HEShellCrater
{
	class ShellSmokeTrail1
	{
		simulation = "particles";
		type = "ShellSmokeTrail1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShellSmokeTrail2
	{
		simulation = "particles";
		type = "ShellSmokeTrail2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShellSmokeTrail3
	{
		simulation = "particles";
		type = "ShellSmokeTrail3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShellStones
	{
		simulation = "particles";
		type = "DirtMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class MissileCircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
	};
};
class ArtyShellCrater
{
	class ShellSmokeTrail1
	{
		simulation = "particles";
		type = "ShellSmokeTrail1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShellSmokeTrail2
	{
		simulation = "particles";
		type = "ShellSmokeTrail2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShellSmokeTrail3
	{
		simulation = "particles";
		type = "ShellSmokeTrail3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShellStones
	{
		simulation = "particles";
		type = "DirtBig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class MissileCircleDust
	{
		simulation = "particles";
		type = "CircleDustBig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
	};
};
class ExploAmmoCrater
{
	class ExploAmmoStones
	{
		simulation = "particles";
		type = "DirtSmall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class CircleDust
	{
		simulation = "particles";
		type = "CircleDustSmall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
	};
};
class ImpactEffectsSmall
{
	class ImpactDust
	{
		simulation = "particles";
		type = "ImpactDustPlaster";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactConcrete
	{
		simulation = "particles";
		type = "ImpactConcrete";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsSmall06
	{
		simulation = "particles";
		type = "ImpactSandSmoke2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactEffectsBlood
{
	class Blood
	{
		simulation = "particles";
		type = "Blood";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 2;
	};
};
class ImpactEffectsWater
{
	class ImpactEffectsWater01
	{
		simulation = "particles";
		type = "ImpactEffectsWater1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsWater02
	{
		simulation = "particles";
		type = "ImpactEffectsWater2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class ImpactEffectsWater03
	{
		simulation = "particles";
		type = "ImpactEffectsWater3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class ImpactEffectsWater04
	{
		simulation = "particles";
		type = "ImpactEffectsWater4";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class ImpactEffectsWater05
	{
		simulation = "particles";
		type = "ImpactEffectsWater5";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class ImpactEffectsWater06
	{
		simulation = "particles";
		type = "ImpactEffectsWater6";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class ImpactEffectsWater07
	{
		simulation = "particles";
		type = "ImpactEffectsWater7";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
};
class ImpactMetal
{
	class SparksLight
	{
		simulation = "light";
		type = "SparksLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class ImpactSparks1
	{
		simulation = "particles";
		type = "ImpactSparks1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class ImpactSparks2
	{
		simulation = "particles";
		type = "ImpactSparks2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSmoke
	{
		simulation = "particles";
		type = "ImpactSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSmoke2
	{
		simulation = "particles";
		type = "ImpactSmoke2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactGlass
{
	class GlassShards
	{
		simulation = "particles";
		type = "GlassShards";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class GlassShards2
	{
		simulation = "particles";
		type = "GlassShards2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class GlassDust
	{
		simulation = "particles";
		type = "GlassDust";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class GlassHole
	{
		simulation = "particles";
		type = "GlassHole";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactGlassThin
{
	class GlassShards
	{
		simulation = "particles";
		type = "GlassShards";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class GlassShards2
	{
		simulation = "particles";
		type = "GlassShards2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class GlassDust
	{
		simulation = "particles";
		type = "GlassDust";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactWood
{
	class ImpactDust
	{
		simulation = "particles";
		type = "ImpactDustWood";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class WoodChippings
	{
		simulation = "particles";
		type = "WoodChippings";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class WoodChippings2
	{
		simulation = "particles";
		type = "WoodChippings2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class WoodHole
	{
		simulation = "particles";
		type = "WoodHole";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactPlaster
{
	class ImpactDust
	{
		simulation = "particles";
		type = "ImpactDustPlaster";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactConcrete
	{
		simulation = "particles";
		type = "ImpactConcrete";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactRubber
{
	class ImpactDust
	{
		simulation = "particles";
		type = "ImpactSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactBlood
{
	class Blood
	{
		simulation = "particles";
		type = "Blood";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 2;
	};
};
class ImpactConcrete
{
	class ImpactDust
	{
		simulation = "particles";
		type = "ImpactDustConcrete";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactDust2
	{
		simulation = "particles";
		type = "ImpactDustConcrete2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactConcrete
	{
		simulation = "particles";
		type = "ImpactConcrete";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactConcrete2
	{
		simulation = "particles";
		type = "ImpactConcrete2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactLeaves
{
	class LeavesFall
	{
		simulation = "particles";
		type = "LeavesFall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SticksFall
	{
		simulation = "particles";
		type = "SticksFall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.08;
	};
};
class ImpactLeavesGreen
{
	class LeavesFall
	{
		simulation = "particles";
		type = "LeavesFallGreen";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SticksFall
	{
		simulation = "particles";
		type = "SticksFallGreen";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.08;
	};
};
class BombCrater
{
	class BombSmk2
	{
		simulation = "particles";
		type = "BombSmk2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.7;
	};
	class BombSmk3
	{
		simulation = "particles";
		type = "BombSmk3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 3;
	};
	class BombDust
	{
		simulation = "particles";
		type = "BombDust";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 3;
	};
};
class ExplosionEffectsWater
{
	class ExplosionEffectsWater
	{
		simulation = "particles";
		type = "ExplosionEffectsWater";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class CannonFire
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Smoke
	{
		simulation = "particles";
		type = "CannonSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Flash
	{
		simulation = "particles";
		type = "CannonFlash";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class heavyCaliber
{
	class heavyCaliber1
	{
		simulation = "particles";
		type = "heavyCaliber1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class heavyCaliber2
	{
		simulation = "particles";
		type = "heavyCaliber2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class SencondaryExplosion
{
	class Light1
	{
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class Exp1
	{
		simulation = "particles";
		type = "SecondaryExp";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class Smoke1
	{
		simulation = "particles";
		type = "GrenadeSmoke1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class GrenadeExplosion
{
	class Light1
	{
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeExp1
	{
		simulation = "particles";
		type = "GrenadeExp";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class GrenadeSmoke1
	{
		simulation = "particles";
		type = "GrenadeSmoke1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class MortarExplosion
{
	class Light1
	{
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeExp1
	{
		simulation = "particles";
		type = "GrenadeExp1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class GrenadeSmoke1
	{
		simulation = "particles";
		type = "GrenadeSmoke1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class WPExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 1;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "WPCloud";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Trails
	{
		simulation = "particles";
		type = "WPTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ExplosionEffects
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "SmallSmokeFast1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ATMissileExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudMedDark";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class AAMissileExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudMedLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ATRocketExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudBigLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class HERocketExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "GrenadeExp";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudBigLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class HEShellExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudMedDark";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ArtyShellExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudBigDark";
		position[] = {0,0,0};
		intensity = 2;
		interval = 1;
		lifeTime = 1;
	};
};
class BombExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class BombExp1
	{
		simulation = "particles";
		type = "BombExp1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class BombSmk1
	{
		simulation = "particles";
		type = "BombSmk1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.7;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
};
class HelicopterExplosionEffects
{
	class Shards
	{
		simulation = "particles";
		type = "HeliDestructionShards1";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Shards2
	{
		simulation = "particles";
		type = "ObjectDestructionShards";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudMedDark";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class HelicopterExplosionEffects2
{
	class Shards
	{
		simulation = "particles";
		type = "HeliDestructionShards2";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsStatic
	{
		simulation = "particles";
		type = "ObjectDestructionShardsStatic";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Shards2
	{
		simulation = "particles";
		type = "ObjectDestructionShards";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsStatic2
	{
		simulation = "particles";
		type = "ObjectDestructionShardsStatic";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "VehExplosionParticles";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Explosion2
	{
		simulation = "particles";
		type = "FireBallBright";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke1
	{
		simulation = "particles";
		type = "VehExpSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "VehExpSmoke2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class VehicleExplosionEffects
{
	class ExpSparks
	{
		simulation = "particles";
		type = "ExpSparks";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class Shards
	{
		simulation = "particles";
		type = "ObjectDestructionShards";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsStatic
	{
		simulation = "particles";
		type = "ObjectDestructionShardsStatic";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Shards2
	{
		simulation = "particles";
		type = "ObjectDestructionShards";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsStatic2
	{
		simulation = "particles";
		type = "ObjectDestructionShardsStatic";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "VehExplosionParticles";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Explosion2
	{
		simulation = "particles";
		type = "FireBallBright";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke1
	{
		simulation = "particles";
		type = "VehExpSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "VehExpSmoke2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class RocketExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLightMed";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class GrenadeExp1
	{
		simulation = "particles";
		type = "GrenadeExp1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "SmallSmokeFast1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ExploAmmoExplosion
{
	class ExploAmmoFlash
	{
		simulation = "particles";
		type = "ExploAmmoFlash";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExploAmmoSmoke
	{
		simulation = "particles";
		type = "ExploAmmoSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ExhaustsEffect
{
	class ExhaustsEffect01
	{
		simulation = "particles";
		type = "ExhaustSmoke1";
	};
};
class ExhaustsEffectBig
{
	class ExhaustsEffect01
	{
		simulation = "particles";
		type = "ExhaustSmokeBig1";
	};
};
class LDustEffects
{
	class LeftDust1
	{
		simulation = "particles";
		type = "LeftDust1";
	};
	class LeftDustLong
	{
		simulation = "particles";
		type = "LeftDustLong";
	};
};
class RDustEffects
{
	class RightDust1
	{
		simulation = "particles";
		type = "RightDust1";
	};
	class RightDustLong
	{
		simulation = "particles";
		type = "RightDustLong";
	};
};
class RWaterEffects
{
	class RightWater1
	{
		simulation = "particles";
		type = "RightWater1";
	};
};
class LWaterEffects
{
	class LeftWater1
	{
		simulation = "particles";
		type = "LeftWater1";
	};
};
class REngEffects
{
	class RightEng1
	{
		simulation = "particles";
		type = "RightEng1";
	};
};
class LEngEffects
{
	class LeftEng1
	{
		simulation = "particles";
		type = "LeftEng1";
	};
};
class FDustEffects
{
	class TankDust1
	{
		simulation = "particles";
		type = "TankDust1";
	};
	class TankDust2
	{
		simulation = "particles";
		type = "TankDust2";
	};
	class TankDust3
	{
		simulation = "particles";
		type = "TankDust3";
	};
};
class HeliDust
{
	class HDust1
	{
		simulation = "particles";
		type = "HDust1";
	};
	class HDust1Long
	{
		simulation = "particles";
		type = "HDust1Long";
	};
};
class HeliWater
{
	class HWater1
	{
		simulation = "particles";
		type = "HWater1";
	};
};
class DamageSmokeHeli
{
	class DSmoke1
	{
		simulation = "particles";
		type = "DSmoke1";
	};
};
class DamageSmokePlane
{
	class DSmoke2
	{
		simulation = "particles";
		type = "DSmoke2";
	};
};
class SmallFire
{
	class Light1
	{
		simulation = "light";
		type = "SmallFireLight";
	};
	class sound
	{
		simulation = "sound";
		type = "Fire";
	};
	class Fire1
	{
		simulation = "particles";
		type = "SmallFireF";
	};
	class Smoke1
	{
		simulation = "particles";
		type = "SmallFireS";
	};
};
class SmokeShellWhite
{
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "SmokeShellWhite";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmokeShellWhite2
	{
		simulation = "particles";
		type = "SmokeShellWhite2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ScudEffect
{
	class Light1
	{
		simulation = "light";
		type = "ScudLight";
	};
	class Smoke
	{
		simulation = "particles";
		type = "ScudSmoke";
	};
	class Smoke2
	{
		simulation = "particles";
		type = "ScudSmoke2";
	};
	class Fire
	{
		simulation = "particles";
		type = "ScudFire";
	};
};
//};